/* 
 * File:   board.h
 * Author: jon
 *
 * Created on April 18, 2018, 11:46 AM
 */

#ifndef BOARD_H
#define	BOARD_H
#include <xc.h>
#include "colors.h"
#include "mcc_generated_files/mcc.h"

char *destinations[] = {"Dino Diner", "Mystery Tree", "Big Foot", "Largest Fish", "Paul Bunyan", "Santa's Village", "Reptile Ranch", "Teepee Town"};

typedef struct player {
    color player_color;
    unsigned char visited;
    unsigned char position;
} player;

typedef struct board_state {
    unsigned char num_players;
    unsigned char is_finished;
    unsigned int current_move;
    player players[4];
} board_state;


void diskButtonHandler(unsigned char num);
void selectButtonHandler();
void board_init();
uint8_t selectButtonPressed();
void board_update();


#endif	/* BOARD_H */

