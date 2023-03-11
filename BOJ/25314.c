#include <stdio.h>
int main() {
	int N;
	scanf("%d", &N);
	N = N / 4;
	int i;
	for (i = 0; i < N; i++) {
		printf("long ");
	}
	printf("int");
	return 0;
}
