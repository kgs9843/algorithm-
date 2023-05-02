#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
	int rear;
	int data[10000];
	int front;
	int size;
}queue;

void intit_queue(queue* q) {
	q->rear =q->front = -1;
	q->size = 0;
}

//왜 작동이 안될까?
int is_empty(queue* q) {
	return q->front == q->rear;
}



void pop(queue* q) {
	if (q->front == q->rear) {
		printf("%d\n",-1);
		return;
	}
	printf("%d\n", q->data[++(q->front)]);
	(q->size)--;
}
void push(queue* q, int data) {
	q->data[++(q->rear)] = data;
	(q->size)++;
}
void empty_print(queue* q) {
	if (q->front == q->rear){
		printf("%d\n",1);
		return;
	}
	printf("%d\n",0);
}
void front(queue* q) {
	if (q->front == q->rear) {
		printf("%d\n", -1);
		return;
	}
	printf("%d\n",q->data[(q->front)+1]);
}
void back(queue* q) {
	if (q->front == q->rear) {
		printf("%d\n", -1);
		return;
	}
	printf("%d\n",q->data[(q->rear)]);
}
void size(queue* q) {
	printf("%d\n", q->size);
}



int main(void) {
	int n;
	scanf("%d", &n);
	queue q;
	intit_queue(&q);
	for (int i = 0; i < n; i++) {
		char input[10];
		scanf("%s", input);
		if (strcmp(input, "push")==0) {
			int c;
			scanf(" %d", &c);
			push(&q, c);
		}
		else if (strcmp(input,"pop")==0) {
			pop(&q);
		}
		else if (strcmp(input, "size")==0) {
			size(&q);
		}
		else if (strcmp(input, "empty")==0) {
			empty_print(&q);
		}
		else if (strcmp(input, "front")==0) {
			front(&q);
		}
		else if (strcmp(input, "back")==0) {
			back(&q);
		}
	}
}
