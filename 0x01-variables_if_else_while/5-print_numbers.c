#include <stdio.h>

int main(void) {
	int n = 0;

	for (; n < 10; n++) {
		printf("%d", n % 10);
	}

	putchar('\n');
	return(0);
}
