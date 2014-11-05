#ifndef ACTION_H
#define ACTION_H

#include "../other/global.h"
#include "../board/board.h"

typedef enum displacement {UP, DOWN, LEFT, RIGHT} disp;

typedef struct direction {
	short x;
	short y;
} direction;

/* Ricava la direzione dato il valore dello spostamento */
direction* disp_to_dir (disp d);

/* Ricava la tessera destinazione dato lo spostamento e la tessera di partenza */
card* target (card* c, disp d);

/* Scambia due tessere */
void swap(card* c1, card* c2);

/* Sposta la tessera data dello spostamento indicato */
bool move (card* c, disp d);

#endif
