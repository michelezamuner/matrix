#ifndef CARD_H
#define CARD_H

#include "../other/global.h"
#include "../value/value.h"
#include "../position/position.h"

typedef struct card {
	position pos;
	value val;
} card;

#endif
