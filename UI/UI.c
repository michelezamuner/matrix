#include "UI.h"

/* visualizza la plancia */
void show_board() {

	little i, j;

	printf ("\n\t");

	for (i = 0; i < DIM; i++) {
		for (j = 0; j < DIM; j++) {
			printf ("%s\t", val_to_string( board[i][j]->val));
		}
		printf ("\n\t");
	}

	printf ("\n");	
}

/* visualizza le posizioni delle tessere
void show_positions() {

	little i, j;

	printf ("\n\t");

	for ( i = 0; i < DIM; i++) {
		for (j = 0; j < DIM; j++) {
			printf("(%d, %d)\t", board[i][j]->pos.x, board[i][j]->pos.y);
		}
		printf("\n\t");
	}

	printf ("\n");
}*/
