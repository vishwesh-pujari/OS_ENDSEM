#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>

#include <fcntl.h>

int main(int argc, char *argv[]) {
	int fd, i, x;
	char buf[4096*2], *p;
	getchar();
	fd = open(argv[1], O_RDONLY);
	p = mmap(NULL, 4096, PROT_READ, MAP_SHARED, fd, 0);
	for(i = 0; i < 4096; i++)
		x = p[i];
	getchar();
	close(fd);
	return 0;
}
