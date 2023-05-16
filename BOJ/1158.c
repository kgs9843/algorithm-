#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct linklist {
	int data;
	struct linklist* rlink;
	struct linklist* llink;
}linklist;


linklist* init_head() {
	linklist* head = (linklist*)malloc(sizeof(linklist));
	head->rlink =head->llink = head;
	head->data = 0;
	return head;
}

void push_data(linklist* head, int data) {
	linklist* q= (linklist*)malloc(sizeof(linklist));
	q->data = data;
	head->rlink->llink = q;
	q->rlink = head->rlink;
	q->llink = head;
	head->rlink = q;
}

void print_list(linklist* head) {
	for (linklist* i = head->rlink; i != head; i = i->rlink) {
		printf("%d ", i->data);
	}
}
linklist* delete_node(linklist* q) {
	linklist* p = q->rlink;
	q->rlink->llink = q->llink;
	q->llink->rlink = q->rlink;
	free(q);
	return p;
}


void answer(linklist* head, int people,int number) {
	int count = 1;
	linklist* q = head->rlink;
	printf("<");
	while (head->rlink != head) {
		if (q->data == 0) {
			q=q->rlink;
		}
		else {
			if (count == number) {
				if (head->rlink->rlink == head) {
					printf("%d", q->data);
				}
				else printf("%d, ", q->data);
				q=delete_node(q);
				count = 0;
			}
			else {
				q = q->rlink;
			}
			count++;
		}

		
	}
	printf(">");
}


linklist* pushdata(people) {
	linklist* head = init_head();
	for (int i = people; i >= 1; i--) {
		push_data(head,i);
	}
	return head;
}



int main() {
	int people;
	int number;
	scanf("%d %d", &people, &number);
	linklist* head=pushdata(people);
	answer(head, people,number);


}
