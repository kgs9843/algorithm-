#include<stdio.h>
#define MAX 100001

char rhkfgh1[MAX];
int stack[MAX];
int top = -1;

int main(void) {
	scanf("%s", rhkfgh1);
	int i = 0;
	int sum = 0;
	while (rhkfgh1[i] != '\0') {
		if (rhkfgh1[i] == '(') {//((()))
			stack[++top] = i;
		}
		else if (rhkfgh1[i] == ')') {
			//레이저인 경우
			if (stack[top] + 1 == i) {
				top--;
				sum += top + 1;
			}
			else {
				top--;
				sum++;
			}
		}
		i++;
	}
	printf("%d", sum);
	return 0;
}
