#include <stdio.h>

int main(void) {
	int n;
	int j;

	for (n = 48; n <= 57; n++) {
		for (j = 48; j <= 57; j++) {
			putchar(n);
			putchar(j);
			putchar(44);
			putchar(32);
		}
	}

	putchar('\n');
	return(0);
}
