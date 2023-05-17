#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int size = 0;
typedef struct linklist {
	struct linklist* rlink;
	struct linklist* llink;
	int data;
}linklist;

void init(linklist* head) {
	head->rlink = head->llink = head;
	head->data = 0;
}

void push_front(linklist* head,int data) {
	linklist* q = (linklist*)malloc(sizeof(linklist));
	q->data = data;
	head->rlink->llink = q;
	q->rlink = head->rlink;
	head->rlink = q;
	q->llink = head;
	size++;
}
void push_back(linklist* head, int data) {
	linklist* q = (linklist*)malloc(sizeof(linklist));
	q->data = data;
	q->rlink = head;
	q->llink = head->llink;
	head->llink->rlink = q;
	head->llink = q;
	size++;
}
int pop_front(linklist* head) {
	if (head->rlink == head) {
		return -1;
	}
	linklist* q = NULL;
	q = head->rlink;
	int data= q->data;
	q->llink->rlink = q->rlink;
	q->rlink->llink = q->llink;
	free(q);
	if (size != 0) {
		size--;
	}
	return data;
}
int pop_back(linklist* head) {
	if (head->rlink == head) {
		return -1;
	}
	linklist* q = NULL;
	q = head->llink;
	int data = q->data;
	q->llink->rlink = q->rlink;
	q->rlink->llink = q->llink;
	free(q);
	if (size != 0) {
		size--;
	}
	return data;
}
int empty(linklist* head) {
	if (head->rlink == head) {
		return 1;
	}
	return 0;
}
int front(linklist* head) {
	if (head->rlink == head) {
		return -1;
	}
	return head->rlink->data;
}
int back(linklist* head) {
	if (head->rlink == head) {
		return -1;
	}
	return head->llink->data;
}
void print_list(linklist* head) {
	for (linklist* i = head->rlink; i != head; i = i->rlink) {
		printf("<%d>", i->data);
	}
}


int main(void) {
	int input;
	linklist* head = (linklist*)malloc(sizeof(linklist));
	init(head);
	scanf("%d", &input);
	for (int i = 0; i < input; i++) {
		char a[15];
		scanf(" %s", a);
		if (strcmp(a, "push_front")==0) {
			int number;
			scanf(" %d", &number);
			push_front(head, number);
			//print_list(head);
		}
		else if (strcmp(a, "push_back")==0) {
			int number;
			scanf(" %d", &number);
			push_back(head, number);
			//print_list(head);
		}
		else if (strcmp(a, "pop_front")==0) {
			printf("%d\n", pop_front(head));
		}
		else if (strcmp(a, "pop_back")==0) {
			printf("%d\n", pop_back(head));
		}
		else if (strcmp(a, "size")==0) {
			printf("%d\n", size);
		}
		else if (strcmp(a, "empty")==0) {
			printf("%d\n", empty(head));
		}
		else if (strcmp(a, "front")==0) {
			printf("%d\n", front(head));
		}
		else if (strcmp(a, "back")==0) {
			printf("%d\n", back(head));
		}
	}
}
