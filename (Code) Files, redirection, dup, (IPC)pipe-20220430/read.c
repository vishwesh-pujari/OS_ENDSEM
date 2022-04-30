#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <errno.h>
int main(int argc, char *argv[]) {
	int fd, n, i;
	char buf[128];

	fd = open(argv[1], O_RDONLY);
	if(fd == -1) {
		perror("open failed");
		return errno;
	}
	n = read(fd, buf, 8);	
	for(i = 0; i < n; i++)
		putchar(buf[i]);	
	return 0;
}
