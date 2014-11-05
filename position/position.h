#ifndef POSITION_H
#define POSITION_H

#include "../other/global.h"

/* posizione di un oggetto nello spazio bidimensionale */
typedef struct position {
	little x;
	little y;
} position;

/* converte una coppia di interi in una posizione */
position* int_to_pos (int x, int y);

#endif
