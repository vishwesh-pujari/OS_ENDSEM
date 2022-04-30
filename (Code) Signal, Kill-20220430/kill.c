#include <sys/types.h>
#include <signal.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	return kill(atoi(argv[1]), atoi(argv[2]));
}
