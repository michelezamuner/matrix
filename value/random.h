#ifndef RANDOM_H
#define RANDOM_H

#include "../other/global.h"

/* Genera un intero casuale tra 0 e MAX_CARDS -1 diverso da quelli forniti in input */
little rnd_n(little* nums, little pos);

/* Genera un vettore casuale di MAX_CARDS interi, e lo memorizza nel vettore di input */
void rnd_nums(little nums[MAX_CARD]);

#endif
