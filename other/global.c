#include "global.h"

/* Controlla che una coordinata sia all'interno delle dimensioni della plancia [0, DIM] */
bool check_bound (little c) {
	if (c >= 0 && c < DIM) {
		return true;
	}
	return false;
}
