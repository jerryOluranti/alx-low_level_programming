#include <stdio.h>

int main(void) {
	int n = 48;

	for (; n <= 57; n++) {
		putchar(n);
		putchar(44);
		putchar(32);
	}

	putchar('\n');
	return(0);
}
