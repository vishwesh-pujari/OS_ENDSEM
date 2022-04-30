#define _GNU_SOURCE
#include <sched.h>
#include <stdio.h>
// A demonstration of how to use clone in simplest possible way
struct data {
	int a, b;
};
int f(void *arg) {
	struct data *d = (struct data *)arg;
	printf("in f %d %d\n", d->a, d->b);
}
char stack1[4096];
int main(int argc, char *argv[]) {
	int tid;
	struct data x;
	x.a = 10; x.b = 20;
	tid = clone(f, stack1 + 4096, 0, &x);
	printf("tid %d\n", tid);
	return 0;
}
