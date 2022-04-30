#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
	int fd, n, i;
	char buf[128];

	n = write(1, "out1\n", 6);
	n = write(2, "err1\n", 4);
	n = write(1, "out2\n", 3);
	n = write(2, "err2\n", 4);
	return 0;
}
