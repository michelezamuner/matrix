#ifndef BOARD_H
#define BOARD_H

#include "../other/global.h"
#include "../card/card.h"

card* board[DIM][DIM];

/* Popola la plancia con MAX_CARD tessere casuali */
void fill_board();

/* Trova una tessera dato il suo valore */
card* find_card(value v);

#endif
