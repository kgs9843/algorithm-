#include<stdio.h>
int main(void) {
	int input;
	scanf("%d", &input);
	for (int i = 0; i < input; i++) {
		int a, b,c;
		scanf("%d %d", &a, &b);
		if (a > b) {
			c = a;
		}
		else c = b;
		int i = 2;
		int MIN=c;
		while (MIN % a != 0 || MIN % b != 0) {
			MIN = c * i;
			i++;
		}
		printf("%d\n", MIN);
	}
}
