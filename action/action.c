#include "action.h"

/* Ricava la direzione dato il valore dello spostamento */
direction* disp_to_dir (disp d) {

	direction* new_dir = malloc(sizeof(direction));

	switch (d) {
		case UP:
			/* DDDDD / printf("[DISP_TO_DIR] UP\n");*/
			new_dir->x = -1;
			new_dir->y = 0;
			break;
		case DOWN:
			/* DDDDD / printf("[DISP_TO_DIR] DOWN\n");*/
			new_dir->x = 1;
			new_dir->y = 0;
			break;
		case LEFT:
			/* DDDDD / printf("[DISP_TO_DIR] LEFT\n");*/
			new_dir->x = 0;
			new_dir->y = -1;
			break;
		case RIGHT:
			/* DDDDD / printf("[DISP_TO_DIR] RIGHT\n");*/
			new_dir->x = 0;
			new_dir->y = 1;
			break;
		default:
			new_dir->x = 0;
			new_dir->y = 0;
			break;
	}
	return new_dir;
}

/* Ricava la tessera destinazione dato lo spostamento e la tessera di partenza */
card* target (card* c, disp d) {

	direction* new_dir = disp_to_dir(d);

	/* DDDDD / printf("[TARGET] card_x: %d\n", c->pos.x);
	/* DDDDD / printf("[TARGET] card_y: %d\n", c->pos.y);
	/* DDDDD / printf("[TARGET] card_value: %s\n", val_to_string(board[c->pos.x][c->pos.y]->val));
	/* DDDDD / printf("[TARGET] card_add: %d\n", board[c->pos.x][c->pos.y]);
	/* DDDDD / printf("[TARGET] new_dir_x: %d\n", new_dir->x);
	/* DDDDD / printf("[TARGET] new_dir_y: %d\n", new_dir->y);*/

	little new_x = c->pos.x + new_dir->x,
		new_y = c->pos.y + new_dir->y;

	/* DDDDD / printf("[TARGET] target_x: %d\n", new_x);
	/* DDDDD / printf("[TARGET] target_y: %d\n", new_y);

	/* DDDDD / printf("[TARGET] chk_bnd x: %d\n", check_bound(new_x));
	/* DDDDD / printf("[TARGET] chk_bnd y: %d\n", check_bound(new_y));*/

	if (check_bound(new_x) == true && check_bound(new_y) == true) {
		/* DDDDD / printf("[TARGET] POS INSIDE BOUNDS!!");*/
		return board[new_x][new_y];
	} else {
		return NULL;
	}
}

/* Scambia due tessere */
void swap(card* c1, card* c2) {

	value tmp;
	tmp = c1->val;

	c1->val = c2->val;

	c2->val = tmp;
}

/* Sposta la tessera data nella direzione indicata */
bool move (card* c, disp d) {

	/* DDDDD / printf("[MOVE] card_add: %d\n", c);*/
	/* DDDDD / printf("[MOVE] card_add - pos: (%d, %d)\n", c->pos.x, c->pos.y);*/
	/* DDDDD / printf("[MOVE] card_add: %d\n", board[c->pos.x][c->pos.y]);*/

	card* tg = target (c,d);

	/* DDDDD / printf("[MOVE] target: %s\n", val_to_string(tg->val));*/

	if (tg == find_card(VOID)) {
		swap(c,tg);
		return true;
	}

	return false;
}
