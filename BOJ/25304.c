#include <stdio.h>
int main() {
	int price,N,i,a,b,sum=0;
	scanf("%d", &price);
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d %d", &a, &b);
		sum = sum + (a * b);
	}
	if (sum == price) {
		printf("Yes");
	}
	else {
		printf("No");
	}
	return 0;
}
