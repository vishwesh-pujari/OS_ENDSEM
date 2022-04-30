int a[4096][4096];
int main() {
	int i = 0, j;
	while(1) {
		i = (i + 1) % 4096;
		for(j = 0; j < 4096; j++)
			a[i][j] = 2;
		}
}
