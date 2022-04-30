#include <stdio.h>
#include <signal.h>
int *p = 1234, i = 1234;
void seghandler(int signo) {
	printf("Seg fault ocurred \n");
	return;
}
void inthandler(int signo) {
	printf("INT signal received\n");
	return;
}
int main() {
	signal(SIGINT, inthandler);
	getchar();
	i = 10;
	signal(SIGSEGV, seghandler); 
	*p = 100; 
	return 0;
}
