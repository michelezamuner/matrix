#ifndef GLOBAL_H
#define GLOBAL_H

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MAX_CARD 9
#define MAX_VALUE 10
#define MAX_ITERATION 100
#define DIM 3

typedef unsigned short little;
typedef enum bool {true, false} bool;

/* Controlla che una coordinata sia all'interno delle dimensioni della plancia [0, DIM] */
bool check_bound (little c);

#endif
