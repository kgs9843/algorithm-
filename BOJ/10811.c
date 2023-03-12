#include <stdio.h>
int main() {
	int N, M, buket[101] = { 0 }, ans[101] = { 0 },i;
	scanf("%d %d", &N, &M);
	for (i = 0; i < N; i++) {
		buket[i] = i + 1;
		ans[i] = i + 1;
	}//12345
	int A, B, j;
	for (i = 0; i < M; i++) {
		scanf("%d %d", &A, &B);
		int c = A-1;
		for (j = B-1; j >= A-1; j--) {
			ans[c] = buket[j];
			c++;
		}
		for (j = 0; j < N; j++) {
			buket[j] = ans[j];
		}
	}
	for(i=0;i<N;i++){
		printf("%d ", ans[i]);
	}

	return 0;
}

