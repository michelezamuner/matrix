#ifndef VALUE_H
#define VALUE_H

#include "../other/global.h"
#include "random.h"

typedef enum value {VOID, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, __ERROR__} value;

static const char* val_string[MAX_VALUE] = {
	"", "Uno", "Due", "Tre", "Quattro", "Cinque", "Sei", "Sette", "Otto", "ERRORE!"
				};

/* converte un intero in un valore */
value int_to_val (int i);

/* converte un valore in un intero */
int val_to_int (value v);

/* converte un valore in una stringa */
const char* val_to_string (value v);

/* Genera un vettore casuale di MAX_CARD valori, e lo memorizza nel vettore di input */
void rnd_values(value vals[MAX_CARD]);

#endif
