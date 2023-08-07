#include<stdio.h>
#define MAX 1000000
char stack[MAX];
int top=-1;
int main(void) {
	int input,convert;
	char c;
	scanf("%d %d", &input,&convert);
	int a = input;
	while (a / convert != 0) {
		int b = a % convert;
		c = b + '0';
		if (b >= 10) {
			c = b - 10 + 'A';
		}
		stack[++top] =c;
		a = a / convert;
	}
	c = a % convert+'0';
	if (a % convert >= 10) {
		c = a % convert - 10 + 'A';
	}
	stack[++top] = c;

	while (top > -1) {
		printf("%c", stack[top]);
		top = top - 1;
	}
}

