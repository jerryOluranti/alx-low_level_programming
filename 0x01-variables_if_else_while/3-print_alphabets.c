#include <stdio.h>

int main(void) {
	int c = 97;

	 for (; c <= 122; ++c) {
	 	putchar(c);
	 }

	 for (c = 65; c <= 90; ++c) {
	 	putchar(c);
	 }

	 putchar('\n');
	 return(0);
}
