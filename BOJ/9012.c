#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
	int top;
	char data[51];
}stack;

void init_stack(stack* p) {
	p->top = -1;
}
int is_empty(stack* p) {
	return p->top == -1;
}
void push(stack* p, char c) {
	p->data[++(p->top)] = c;
}
int pop(stack* p) {
	return p->data[(p->top--)];
}

int vps_test(char* data) {
	stack p;
	init_stack(&p);
	int len = strlen(data);
	int i;
	for (i = 0; i < len; i++) {
		if (data[i] == '(') {
			push(&p, data[i]);
		}
		else if (data[i] == ')') {
			if (is_empty(&p)|| pop(&p) != '(') {
				return 1;
			}
		}
	}
	if (!is_empty(&p)) {
		return 1;
	}
	return 0;
}

int main(void) {
	int n;
	scanf("%d", &n);
	int i;
	char data[51];
	for (i = 0; i < n; i++){
		data[0] = '\0';
		scanf("%s", data);
		int answer=vps_test(data);
		if (answer == 1) {
			printf("NO\n");
		}
		else printf("YES\n");
	}
}
