#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
	int top;
	char data[1001];
}stack;

void init(stack* p) {
	p->top = -1;
}
void push(stack* p,char data) {
	p->data[++(p->top)] = data;
}
int is_empty(stack* p) {
	return p->top == -1;
}
int pop(stack* p) {
	if (is_empty(p)) {
		printf("스택이 비었다.");
		return 1;
	}
	return p->data[(p->top)--];
	
}




void reverse(char* input_char) {
	stack p;
	init(&p);
	int len=strlen(input_char);
	for (int i = 0; i < len; i++) {

		//만약 띄어쓰기를 받았을 때
		if (input_char[i] == ' ') {
			//스택이 빌 때 동안 pop을 해줌
			while (!is_empty(&p)) {
				printf("%c",pop(&p));
			}
			printf(" ");
			continue;
		}
		push(&p, input_char[i]);
		//마지막 글자 일 때
		if (i == len - 1) {
			//스택이 빌 때 동안 pop을 해줌
			while (!is_empty(&p)) {
				printf("%c",pop(&p));
			}
		}
	}
}

int main(void) {
	int input_int;
	char input_char[1001];
	int i;
	scanf("%d", &input_int);
	getchar();//getchar사용을 위해 초기화
	for (i = 0; i < input_int; i++) {
		
		//문자 한 줄 입력
		int j = 0;
		char a;
		while ((a = getchar()) != '\n') {
			input_char[j++] = a;
		}
		input_char[j] = '\0';


		reverse(input_char);
		printf("\n");
	}
}
