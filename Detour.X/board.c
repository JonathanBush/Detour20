#include <xc.h>
#include "motor.h"
#include "lcd.h"
#include "led.h"
#include "colors.h"
#include "board.h"
#include "timer.h"
#include "mcc_generated_files/mcc.h"
#include "mcc_generated_files/eusart1.h"
#include <stdio.h>

typedef struct space {
    uint8_t properties;
    uint8_t next;
    uint8_t led;
} space;

static board_state state;

static uint8_t map[64] = {
    0x81, 2, 0, 1, 3, 4, 5, 6, 0x81, 8, 9, 10, 11, 12, 13, 14, 15, 16, 0x80, 
    18, 19, 20, 21, 22, 23, 24, 0x83, 26, 27, 28, 31, 29, 30, 32, 33, 34, 0x82,
    36, 37, 43, 39, 40, 41, 38, 45, 46, 47, 48, 49, 50, 51, 52, 0x80, 54, 55,
    56, 57, 0x83, 59, 60, 61, 62, 63, 0x82
};

static uint8_t properties[64] = {
    0x00, 0x00, 0xD0, 0xA4, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD1, 0x00, 0xA4,
    0x00, 0xB0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD2, 0x00, 0xA3, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xA5, 0x00, 0x00, 0x00, 0xD3, 0xB0, 0x00, 0x00, 0x00,
    0x00, 0xA5, 0xB0, 0x00, 0x00, 0x00, 0x00, 0xD4, 0x00, 0xA3, 0x00, 0x00,
    0xD5, 0x00, 0x00, 0xA3, 0x00, 0x00, 0xB0, 0xD6, 0x00, 0xB0, 0xD7, 0x00,
    0xB0, 0x00, 0xA3, 0x00
};

static uint8_t disk_positions[4] = {0, 0, 0, 0};

static uint8_t btnflags = 0x00;
/* actions performed when button num is pressed */
void diskButtonHandler(uint8_t num)
{
    if (timer_expired(num)) {
        timer_set(num, 500);
        btnflags |= 0x01 << num;
        led_update();
    }
    
}


uint8_t selectButtonPressed() {
    if (0x10 & btnflags) {
        btnflags &= ~0x10;
        return 1;
    }
    return 0;
}
/* actions performed when the select button is pressed */
void selectButtonHandler(void)
{
    if(timer_expired(4)) {
        timer_set(4, 500);
        btnflags |= 0x10;
        
    }
}

/* actions performed when the UART receives a byte */
void uartRecvHandler(void)
{ 
    /* Code implemented by Syed here*/
    uint8_t num = EUSART1_Read();
   if (num >=0 || num <=3)
   {
       diskButtonHandler(num);
   }
   else if (num = 4)
   {
       selectButtonHandler();
   }
}

void uart_update() {
    if (EUSART1_DataReady) {
        uartRecvHandler();
    }
}

void btn1_isr()
{
    selectButtonHandler();
}

void btn2_isr()
{
    diskButtonHandler(3);
}

void btn3_isr()
{
    diskButtonHandler(2);
}

void btn4_isr()
{
    diskButtonHandler(1);
}

void btn5_isr()
{
    diskButtonHandler(0);
    //selectButtonHandler();
}

void init_players(uint8_t mask) {
    uint8_t i;
    uint8_t ct = 0;
    for (i = 0; i < 4; ++i) {
        if (mask & (0x01 << i)) {
            switch(i) {
                case 0: /* yellow */
                    state.players[ct].player_color = RGB(0x7F, 0x7F, 0x00);
                    state.players[ct].position = 17;
                    state.players[ct].visited = 0x00;
                    break;
                case 1: /* blue */
                    state.players[ct].player_color = RGB(0x00, 0x00, 0xFF);
                    state.players[ct].position = 42;
                    state.players[ct].visited = 0x00;
                    break;
                case 2: /* red */
                    state.players[ct].player_color = RGB(0xFF, 0x00, 0x00);
                    state.players[ct].position = 35;
                    state.players[ct].visited = 0x00;
                    break;
                case 3: /* purple */
                    state.players[ct].player_color = RGB(113, 0, 142);
                    state.players[ct].position = 25;
                    state.players[ct].visited = 0x00;
                    break;
            }
            ++ct;
        }
    }
}

uint8_t selectPlayers() {
    lcd_clear();
    lcd_setpos(0,0);
    lcd_writestr("Select Players");
    btnflags = 0x00;
    uint8_t last = btnflags;
    uint8_t ct = 0;
    do {
        while (!selectButtonPressed()) {
            uart_update();
            if (last != btnflags) {
                last = btnflags;
                lcd_clear();
                if (btnflags & 0x01) {
                    lcd_setpos(1,0);
                    lcd_writestr("Yellow");
                }
                if (btnflags & 0x02) {
                    lcd_setpos(1,11);
                    lcd_writestr("Blue");
                }
                if (btnflags & 0x04) {
                    lcd_setpos(0,12);
                    lcd_writestr("Red");
                }
                if (btnflags & 0x08) {
                    lcd_setpos(0,0);
                    lcd_writestr("Purple");
                }
            }
        }
        uint8_t i = 0;
        ct = 0;
        for (; i < 4; ++i) {
            ct += ((btnflags & (0x01 << i)) != 0);
        }
    } while (ct < 2);
    state.num_players = ct;
    init_players(btnflags & 0x0F);
}


void button_isr_init()
{
    IOCAF0_SetInterruptHandler(btn1_isr);
    IOCAF1_SetInterruptHandler(btn2_isr);
    IOCAF2_SetInterruptHandler(btn3_isr);
    IOCAF3_SetInterruptHandler(btn4_isr);
    IOCAF4_SetInterruptHandler(btn5_isr);
}

void board_init()
{
    timer_init();
    lcd_init();
    led_init(65);
    led_update();
    lcd_setbacklight(127,127,100);
    lcd_setpos(0,0);
    lcd_writestr("Detour 2.1!");
    
    button_isr_init();
    //motor_init();
    selectPlayers();
}

/* number between 1 and 7 */
uint8_t roll() {
    lcd_clear();
    lcd_setpos(0,0);
    lcd_writestr("Press to Roll");
    btnflags = 0;
    uint8_t ct = 0;
    while (!selectButtonPressed()) {
        uart_update();
        ++ct;
    }
    lcd_clear();
    lcd_setpos(0,0);
    char out[17];
    sprintf(out, "You rolled a %d", (ct % 7) + 1);
    lcd_writestr(out);
    __delay_ms(1500);
    return (ct % 7) + 1;
}

uint8_t disk_map(uint8_t disk, uint8_t space)
{
    uint8_t result = 4;
    switch(disk) {
        case 0:
            if (space == 18) {
                result = ((disk_positions[0]) ? 53 : 26);
            } else {
                result = ((disk_positions[0]) ? 16 : 53);
            }
            break;
        case 1:
            if (space == 0) {
                result = ((disk_positions[1]) ? 7 : 41);
            } else {
                result = ((disk_positions[1]) ? 41 : 7);
            }
            break;
        case 2:
            if (space == 36) {
                result = ((disk_positions[2]) ? 44 : 34);
            } else {
                result = ((disk_positions[2]) ? 34 : 44);
            }
            break;
        case 3:
            if (space == 26) {
                result = ((disk_positions[3]) ? 24 : 58);
            } else {
                result = ((disk_positions[3]) ? 58 : 24);
            }
            break;
        default:
            return 1;
    }
    return result;
}

void update_road() {
    led_set_all(0);
    for (uint8_t i = 0; i < state.num_players; ++i) {
        led_set(state.players[i].position, state.players[i].player_color);
    }
    led_update();
}

void move_player(player *p, uint8_t spaces)
{
    uint8_t ct;
    for (ct = 0; ct < spaces; ++ct) {
        uint8_t next = map[p->position];
        if (0x80 & next) {  /* next is disk */
            lcd_setpos(1,0);
            char out[17];
            
            next = disk_map(next & 0x03, p->position);
            sprintf(out, "%d, %d", next, p->position);
            lcd_writestr(out);
        }
        p->position = next;
        update_road();
        if ((properties[p->position] & 0xF0) == 0xD0) {  /* destination */
            if (!((0x01 << (properties[p->position] & 0x0F)) & p->visited)) {   /* not already acquired */
                lcd_clear();
                lcd_setpos(0,0);
                lcd_writestr("You visited");
                lcd_setpos(1,0);
                lcd_writestr(destinations[properties[p->position] & 0x0F]);
                __delay_ms(2000);
            }
        }
        __delay_ms(500);
    }
    if ((properties[p->position] & 0xF0) == 0xA0) { /* skip ahead */
        spaces = properties[p->position] & 0x0F;
        for (ct = 0; ct < spaces; ++ct) {
            uint8_t next = map[p->position];
            if (0x80 & next) {  /* next is disk */
                lcd_setpos(1,0);
                char out[17];

                next = disk_map(next & 0x03, p->position);
                sprintf(out, "%d, %d", next, p->position);
                lcd_writestr(out);
            }
            p->position = next;
            update_road();
            __delay_ms(500);
        }
    }
}

void board_update() 
{
    update_road();
    player *p = &state.players[state.current_move % state.num_players];
    lcd_setbacklight((uint8_t)((p->player_color >> 8) & 0xFF), (uint8_t)((p->player_color) & 0xFF), (uint8_t)((p->player_color >> 16)));
    uint8_t result = roll();
    if (result < 7) {
        move_player(p, result);
    } else {
        btnflags = 0x00;
        while (!(btnflags & 0x0F)) {
            uart_update();
        }
        uint8_t i;
        for (i = 0; i < 4; ++i) {
            if (btnflags & (0x01 << i)) {
                disk_positions[i] = !disk_positions[i];
                motor_rotate(i, disk_positions[i]);
            }
        }
    }
    state.current_move++;
}

