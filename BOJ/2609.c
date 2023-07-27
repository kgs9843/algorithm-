#include<stdio.h>
int main(void) {
	int a, b,c;
	scanf("%d %d", &a, &b);
	if (a > b) {
		c = b;
	}
	else c = a;

	int MAX;
	for (int i = 1; i <= c; i++) {
		if (a % i == 0 && b % i == 0) {
			MAX = i;
		}
	}
	int MIN;
	MIN = a / MAX * b / MAX * MAX;
	printf("%d\n%d", MAX,MIN);
}
