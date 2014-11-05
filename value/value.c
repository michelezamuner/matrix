#include "value.h"

/* converte un intero in un valore */
value int_to_val (int i) {

	value v;
	int count = 0;

	for (v = VOID; v <= EIGHT; v++) {
		if (i == count) {
			return v;
		}
		count++;
	}
	return __ERROR__;
}

/* converte un valore in un intero */
int val_to_int (value v) {

	int i;
	value count = VOID;

	for (i = 0; i < MAX_CARD; i++) {
		if (v == count) {
			return i;
		}
		count++;
	}
	return -1;
}

/* converte un valore in una stringa */
const char* val_to_string (value v) {
	return val_string[val_to_int(v)];
}

/* Genera un vettore casuale di MAX_CARD valori, e lo memorizza nel vettore di input */
void rnd_values(value vals[MAX_CARD]) {

	little i;

	little nums[MAX_CARD];
	rnd_nums(nums);

	for (i = 0; i < MAX_CARD; i++) {
		vals[i] = int_to_val(nums[i]);
	}
}
