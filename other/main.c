#include "global.h"
#include "card.h"

int main(int argc, char** argv) {

	position* my_pos = int_to_pos(3,2);
	printf ("%d, %d\n", my_pos->x, my_pos->y);
	return 0;
}
