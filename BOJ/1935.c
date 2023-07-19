#include<stdio.h>

double stack[101];
int top=-1;

int alphabat[26] = { 0, };//알파벳 인덱스 대응하는 수

int main(void) {
	int input,i;
	char back[101];
	scanf("%d", &input);
	scanf("%s", back);
	for (i = 0; i < input; i++) {
		scanf("%d", &alphabat[i]);
	}
	i = 0;
	while (back[i] != NULL) {
		if (back[i] >= 'A' && back[i] <= 'Z') {
			int c = alphabat[back[i] - 'A'];
			back[i] = c + '0';
		}
		i++;
	}
	//printf("%s", back);
	i = 0;
	do {
		if (back[i] == '*') {
			double a = stack[top--];
			double b = stack[top--];
			stack[++top] = a * b;
		}
		else if (back[i] == '/') {
			double a = stack[top--];
			double b = stack[top--];
			stack[++top] = b / a;
		}
		else if (back[i] == '+') {
			double a = stack[top--];
			double b = stack[top--];
			stack[++top] = a + b;
		}
		else if (back[i] == '-') {
			double a = stack[top--];
			double b = stack[top--];
			stack[++top] = b - a;
		}
		else {
			stack[++top] = back[i]-'0';//문자를 숫자로 바꿔줌
		}
		i++;
	} while (back[i] != NULL);
	printf("%.2f", stack[top]);
}
