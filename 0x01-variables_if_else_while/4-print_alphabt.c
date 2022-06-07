#include <stdio.h>

int main(void) {
	int c = 97;

	 for (; c <= 122; ++c) {
		if (c == 101 || c == 113) 
			continue;
	 	putchar(c);
	 }

	 putchar('\n');
	 return(0);
}
