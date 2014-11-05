#include "position.h"

/* converte una coppia di interi in una posizione */
position* int_to_pos (int x, int y) {
	position* new_pos = malloc (sizeof(position));
	new_pos->x = x;
	new_pos->y = y;
	return new_pos;
}
