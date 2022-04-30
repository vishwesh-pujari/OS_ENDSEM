#define _GNU_SOURCE
#include <sched.h>
#include <stdio.h>
// A demonstration of how to use clone in simplest possible way
int f(void *arg) {
	printf("in f\n");
}
char stack1[4096];
int main(int argc, char *argv[]) {
	int tid;
	tid = clone(f, stack1 + 4096, 0, NULL);
	printf("tid %d\n", tid);
	return 0;
}
