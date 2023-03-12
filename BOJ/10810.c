#include <stdio.h>
int main() {
	int N, M, c, d;
	int i, j, k;
	scanf("%d %d", &N, &M);
	int buket[101] = { 0 };
	for (c = 0; c < M; c++) {
		scanf("%d %d %d", &i, &j, &k);
		for (d = i - 1; d <= j - 1; d++) {
			buket[d] = k;
		}
	}
	for (c = 0; c < N; c++) {
		printf("%d ", buket[c]);
	}
	return 0;
}
