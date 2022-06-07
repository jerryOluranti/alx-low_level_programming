#include <stdio.h>

int main(void) {
	int n;
	int j;
	int k;

	for (n = 48; n <= 57; n++) {
		for (j = 48; j <= 57; j++) {
			for (k = 48; k <= 57; k++) {
				putchar(n);
				putchar(j);
				putchar(k);
				putchar(44);
				putchar(32);
			}
		}
	}

	putchar('\n');
	return(0);
}
