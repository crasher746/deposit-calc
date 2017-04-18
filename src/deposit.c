///Realise functions
#include <stdio.h>
#include "deposit.h"

int Input (int term, int contrib) {
	if (term < 0 || term > 365 || contrib < 1000) {
		return 1;
	}
	return 0;
}

int Process (int term, int contrib) {
	if (term >= 0 && term <= 30) {
		contrib *= 0.9;
	}
	if (term >= 31 && term <= 120) {
		contrib *= 1.02;
	}
	if (term >= 121 && term <= 240) {
		contrib *= 1.06;
	}
	if (term >= 241 && term <= 365) {
		contrib *= 1.12;
	}
	return contrib;
}
