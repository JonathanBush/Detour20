/* 
 * File:   board.h
 * Author: jon
 *
 * Created on April 18, 2018, 11:46 AM
 */

#ifndef BOARD_H
#define	BOARD_H
#include "colors.h"

char *destinations[] = {"Grand Canyon", "Yellowstone"};

typedef struct player {
    color player_color;
    uint8_t visited;
    uint16_t position;
} player;

typedef struct board_state {
    uint8_t num_players;
    uint8_t is_finished;
    uint16_t current_move;
    player players[4];
} board_state;

typedef struct space {
    uint8_t mask;
};

void board_init();


#endif	/* BOARD_H */

