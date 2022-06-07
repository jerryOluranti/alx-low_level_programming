#include <stdio.h>

int main(void) {
	int n;
	int j;
	int k;
	int l;

	for (n = 48; n <= 57; n++) {
		for (j = 48; j <= 57; j++) {
			for (k = 48; k <= 57; k++) {
				for (l = 48; l <= 57; l++) {
					putchar(n);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(l);
					putchar(44);
					putchar(32);
				}
			}
		}
	}

	putchar('\n');
	return(0);
}
