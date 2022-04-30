#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <errno.h>
int main(int argc, char *argv[]) {
	int fd, n, i;
	char buf[128];
	
	write(2, "hello", 5);
	return 0;
}
