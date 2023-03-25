#include<stdio.h>
int main(void) {
	int N,M;
	scanf("%d %d", &N, &M);
	int i,j;
	int buket[101];
	for (i = 0; i < N; i++) {
		buket[i] = i + 1;
	}// 1 2 3 4 5 6 7 8 9 10

	int begin, end, mid;
	int buf1[101] = { 0,};
	int buf2[101] = { 0,};
	for (i = 0; i < M; i++) {
		scanf("%d %d %d", &begin, &end, &mid);

		int c = 0;
		for (j = mid; j <= end; j++) {
			buf1[c++] = buket[j-1];
		}//buf1에 4 5 6 집어넣음 4 5 6 0 0 0 

		c = 0;
		for (j = begin; j < mid; j++) {
			buf2[c++] = buket[j-1];
		}//buf2에  1 2 3 집어넣음 1 2 3 0 0 0 0 0


		c = begin-1;
		int k = 0;
		for (j = mid; j <= end;j++) {
			buket[c++] = buf1[k++];
		}
		k = 0;
		for (j = begin; j < mid; j++) {
			buket[c++] = buf2[k++];
		}
	}
	for (i = 0; i < N; i++) {
		printf("%d ", buket[i]);
	}
	return 0;

}
