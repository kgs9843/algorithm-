#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 1000001

int stack[3];
int top=-1;

int main(void) {
	char input[MAX];
	scanf("%s", input);
	int len = strlen(input);
	if (len % 3 == 2) {
		stack[++top] = 0;
	}
	else if (len % 3 == 1) {
		stack[++top] = 0;
		stack[++top] = 0;
	}
	for (int i = 0; input[i] != NULL; i++) {
		if (top < 2) {
			stack[++top] = input[i] - '0';
			//printf("%d ", stack[top]);
		}
		if (top == 2) {
			//printf("%d", i);
			int rhq = 1;
			int answer = 0;
			while (top > -1) {
				answer = answer + (stack[top] * rhq);
				//printf("%d", answer);
				rhq = rhq * 2;
				top--;
			}
			printf("%d", answer);
		}
	}
}
