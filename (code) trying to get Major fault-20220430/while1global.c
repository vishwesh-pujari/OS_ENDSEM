int a[4096];
int main() {
	int i = 0;
	while(1) {
		i = (i + 1) % 4096;
		a[i] = 2;
	}
}
