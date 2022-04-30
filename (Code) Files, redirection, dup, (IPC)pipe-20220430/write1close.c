#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <errno.h>
int main(int argc, char *argv[]) {
	int fd, n, i;
	char buf[128];
	close(1);
	fd  = open(argv[1], O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);	
	write(1, "hello", 5);
	printf("Hi there\n");
	return 0;
}
