#define _GNU_SOURCE
#include <sched.h>
#include <stdio.h>
// run "ps -eLf" when the process is waiting in getchar();
// observe the PID, LWP(thread) details
int f(void *arg) {
	printf("in f\n");
	while(1)
		;
}
char stack1[4096];
int main(int argc, char *argv[]) {
	int tid;
	tid = clone(f, stack1 + 4096, 0, NULL);
	printf("tid %d\n", tid);
	getchar();
	return 0;
}
