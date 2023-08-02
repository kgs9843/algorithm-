#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 1000001

int stack[3];
int top=-1;

int main(void) {
	char input[MAX];
	scanf("%s", input);
	int index = 0;
	for (int i = 0; input[i] != NULL; i++) {
		int a = input[i] - '0';
		int b;
		//printf("%d ", a);
		while (a / 2 != 0) {
			b = a % 2;
			a = a / 2;
			stack[++top] = b;
			//printf("%d", b);
		}
		//printf("%d\n", a % 2);
		stack[++top] = a%2;
		if (index!=0&&top == 1) {
			stack[++top] = 0;
		}
		else if (index != 0 && top == 0) {
			stack[++top] = 0;
			stack[++top] = 0;
		}
		while (top > -1) {
			int b = stack[top];
			top--;
			printf("%d", b);
		}
		index++;
	}
}
