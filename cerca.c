#include "cerca.h"


int cerca_primo(const char* s, char c) {

	unsigned int i;
	
	for (i = 0; s[i]; i++) {

		if (s[i] == c) {

			return i;
		}



	}

	return -1;
	
}
