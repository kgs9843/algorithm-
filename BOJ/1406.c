#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct linklist {
	char data;
	struct linklist* llink;
	struct linklist* rlink;
}linklist;



linklist* init_head(linklist* head) {
	linklist* q = (linklist*)malloc(sizeof(linklist));
	q->rlink = q->llink = NULL;
	head = q;
	return head;
}
//마지막에 노드를 넣어주고 q를 그 노드를 가르키게 함
linklist* append_last(linklist* q, char data) {
	linklist* p = (linklist*)malloc(sizeof(linklist));
	p->data = data;
	q->rlink = p;
	p->llink = q;
	p->rlink = NULL;
	q = p;
	return q;
}
//q가 가르키는 노드를 삭제
void delete(linklist* q) {
	linklist* removed;
	removed = q->rlink;
	if (removed->rlink != NULL) {
		removed->rlink->llink = q;
		q->rlink = removed->rlink;
	}
	else if (removed->rlink == NULL) {
		q->rlink = NULL;
	}
	free(removed);
}






linklist* append_p(linklist* q, char data,linklist* head) {
	linklist* p = (linklist*)malloc(sizeof(linklist));
	p->data = data;
	if (q->rlink == NULL) {
		q = append_last(q, data);
	}
	else if (q == head) {
		q->rlink->llink = p;
		p ->rlink = q->rlink ;
		p->llink = q;
		q->rlink = p;
		q = p;
	}
	else {
		p->llink = q;
		p->rlink = q->rlink;
		q->rlink->llink = p;
		q->rlink = p;
		q = p;
	}
	return q;
}


//리스트들 출력함수
void print_list(linklist* head) {
	linklist* q;
	for (q = head->rlink; q != NULL; q = q->rlink) {
		printf("%c", q->data);
	}
}



void answer(linklist* q,linklist* head) {
	int input;
	scanf("%d", &input);
	int i;
	for (i = 0; i < input; i++) {
		char input_char;
		scanf(" %c", &input_char);
		if (input_char == 'L') {
			if (q != head) {
				q = q->llink;
			}
		}
		else if (input_char == 'D') {
			if (q->rlink != NULL) {
				q = q->rlink;
			}

		}
		else if (input_char == 'B') {
			if (q != head) {
				q = q->llink;
				delete(q);
			}
		}
		else if (input_char == 'P') {
			char letter;
			scanf(" %c", &letter);
			q=append_p(q, letter,head);
		}
	}
}



int main(void) {
	linklist* head=NULL;
	head = init_head(head);
	linklist* q=head;//마지막 노드를 가르키는 q

	char input[100001];
	scanf("%s", input);// 처음에 입력받은 문자열 ex)abcd
	int n = strlen(input);

	int i;
	for (i = 0; i < n; i++) {
		q=append_last(q,input[i]);//뒤에다 리스트 붙여주고 q가 마지막 리스트 가르킴
	}


	answer(q,head);

	print_list(head);
	
}
