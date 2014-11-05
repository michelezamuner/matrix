#include "other/global.h"
#include "board/board.h"
#include "UI/UI.h"
#include "action/action.h"

int main(int argc, char** argv) {

	int i, j;

	fill_board();

	show_board();
	/*show_positions();*/

	int x, y, d;
	disp di;

	while (1>0) {

		printf("x: "); scanf("%d", &x);
		printf("y: "); scanf("%d", &y);
		printf("d: "); scanf("%d", &d);

		switch (d) {
			case 1:
				di = UP;
				break;
			case 2:
				di = DOWN;
				break;
			case 3:
				di = LEFT;
				break;
			case 4:
				di = RIGHT;
				break;
		}

		/*printf("Tessera selezionata: %s %d\n", val_to_string(board[y-1][x-1]->val), board[y-1][x-1]);*/
		printf("Tessera selezionata - pos: (%d, %d)\n", board[y-1][x-1]->pos.x, board[y-1][x-1]->pos.y);

		if (move(board[y-1][x-1], di) == true) {
			printf("Spostamento effettuato con successo\n");
		} else {
			printf("Spostamento impossibile");
		}

		show_board();
		/*show_positions();*/
	}

	return 0;
}
