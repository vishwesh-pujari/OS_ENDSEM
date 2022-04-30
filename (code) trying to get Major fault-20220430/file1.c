#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char *argv[]) {
	int fd;
	char buf[4096*2];
	getchar();
	fd = open(argv[1], O_RDONLY);
	read(fd, buf, 4096);
	getchar();
	close(fd);
	return 0;
}
