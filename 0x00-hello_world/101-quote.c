#include <unistd.h>
#include <sys/syscall.h>

int main() {
	const char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	syscall(SYS_write, 1, message, sizeof(message));
	return(1);
}
