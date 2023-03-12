#include <stdio.h>
int main() {
	int N, M, c, d;
	int i, j;
	scanf("%d %d", &N, &M);
	int buket[101] = { 0 };
	int add = 1;
	for (c = 0; c < N; c++) {
		buket[c] = add;
		add++;
	}
	for (c = 0; c < M; c++) {
		int convert = 0;
		scanf("%d %d", &i, &j);
		convert = buket[i - 1];
		buket[i - 1] = buket[j-1];
		buket[j - 1] = convert;
	}
	for (c = 0; c < N; c++) {
		printf("%d ", buket[c]);
	}
	return 0;
}
