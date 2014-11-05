#include "board.h"

/* Popola la plancia con MAX_CARD tessere casuali */
void fill_board() {

	little i, j, count = 0;

	value vals[MAX_CARD];
	rnd_values(vals);

	for (i = 0; i < DIM; i++) {
		for (j = 0; j < DIM; j++) {
			card* new_c = malloc(sizeof(card));
			position* new_pos = int_to_pos(i,j);
			new_c->pos.x = new_pos->x;
			new_c->pos.y = new_pos->y;
			new_c->val = vals[count++];

			board[i][j] = new_c;
		}
	}
}

/* Trova una tessera dato il suo valore */
card* find_card(value v) {

	little i,j;

	for (i = 0; i < DIM; i++) {
		for (j = 0; j < DIM; j++) {
			if (board[i][j]-> val == v) {
				return board[i][j];
			}
		}
	}
	return NULL;
}
