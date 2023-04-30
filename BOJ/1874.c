#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
	int top;
	int data[100000];
}stack;

//스택 함수들

void init_stack(stack* p) {
	p->top = -1;
}
int is_empty(stack* p) {
	return p->top == -1;
}
void push(stack* p, int data) {
	p->data[++(p->top)] = data;
}
void pop(stack* p) {
	//p->data[(p->top)--];
	(p->top)--;
}
int peek(stack* p) {
	return p->data[p->top];
}




//+ - 도출하는 함수 NO는 아니니 test함수랑 비슷한 과정에서
//+와 -만 출력하게함
void answer(int* f_a, int n) {
	int i;
	stack p;
	init_stack(&p);
	int k = 0;
	for (i = 1; i <= n; i++) {
		if (is_empty(&p) || f_a[k] != peek(&p)) {
			push(&p, i);
			printf("+\n");
		}
		else if (f_a[k] == peek(&p)) {
			printf("-\n");
			pop(&p);
			k++;
			i--;
		}
	}
	while (!is_empty(&p)) {
		pop(&p);
		printf("-\n");
	}
}


// NO를 구분하는 함수
int answer_test(int* f_a,int n) {
	int i;
	stack p;
	init_stack(&p);
	int *array = (int*)malloc(100000*sizeof(int));
	int k = 0;

	//1부터 n까지 차례대로 스택에 넣고 peek로 비교를 한다
	for (i = 1; i <= n; i++) {

		//스택이 비었을 때는 무조건 넣어주고 
		//f_a의 인덱스와 스택의 마지막항을 비교
		if (is_empty(&p)||f_a[k] != peek(&p)) {
			
			//다르면 스택에 넣어줌
			push(&p, i);
			//printf("+");
		}
		else if(f_a[k]==peek(&p)){

			//같으면 새로운 array함수에다 값을 넣어주고 pop
			array[k] = peek(&p);
			pop(&p);
			k++;
			i--;//push를 안해준 상태이기 때문에 i를 증가시키면 안됨
		}
	}

	//스택이 빌 때 동안 array배열에 넣어줌
	while (!is_empty(&p)) {
		array[k] = peek(&p);
		pop(&p);
		k++;
	}

	//array배열과 f_a배열이 같은지 비교
	for (i = 0; i < n; i++) {
		if (f_a[i] != array[i]) {
			free(array);
			return 1;//다르면 1출력 후 종료
		}
	}
	free(array);
	return 0;// 같으면 0 출력
}


int main(void) {
	int n;
	scanf("%d", &n);
	int i;
	int f_a[100000] = { 0 };

	//제공하는 문제를 f_a배열 안에다 넣어줌
	for (i = 0; i < n; i++) {
		int a;
		scanf("%d", &a);
		f_a[i] = a;
	}

	//NO 구분 함수 
	int test=answer_test(f_a,n);



	if (test == 1) {
		printf("NO");
	}
	else if (test == 0) {
		//+와 -를 출력하는 함수
		answer(f_a, n);
	}
}
