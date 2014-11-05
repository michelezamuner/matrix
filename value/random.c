#include "random.h"

/* Genera un intero casuale tra 0 e MAX_CARDS -1 diverso da quelli forniti in input */
little rnd_n(little* nums, little pos) {

	little count = 0, i, n;
	bool found;

	srand ( time(NULL) );

	do {
		found = false;
		n = rand() % MAX_CARD;

		for (i = 0; i <= pos; i++) {
			if (nums[i] == n) {
				found = true;
			}
		}

		if (found == false) {
			return n;
		}

		count++;
		if (count >= MAX_ITERATION) {
			return MAX_CARD;
		}
	} while (found == true);
}

/* Genera un vettore casuale di MAX_CARDS interi, e lo memorizza nel vettore di input */
void rnd_nums(little nums[MAX_CARD]) {

	little i;

	srand ( time(NULL) );

	nums[0] = rand() % MAX_CARD;

	for (i = 1; i < MAX_CARD; i++) {
		nums[i] = rnd_n(nums, i-1);
	}
}
