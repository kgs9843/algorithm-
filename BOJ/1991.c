#include<stdio.h>
#include<stdlib.h>

typedef struct tree_node{
	char data;
	struct tree_node* right;
	struct tree_node* left;
	struct tree_node* link;
}tree_node;

tree_node* insert(tree_node* q,char data) {
	tree_node* p = (tree_node*)malloc(sizeof(tree_node));
	p->link = NULL;
	p->data = data;
	p->right = p->left = NULL;
	q->link = p;
	return p;
}

void print_node(tree_node* A) {
	for (tree_node* i = A; i != NULL; i = i->link) {
		printf("%c   ", i->data);
	}
}

void connect(tree_node* A, char head, char left, char right) {
	tree_node* q = A;
	tree_node* p = A;
	while (q->data != head) {
		q = q->link;
	}
	if (left == '.') {
		q->left = NULL;
	}
	else {
		while (p->data != left) {
			p = p->link;
		}
		q->left = p;
	}
	p = A;//초기화
	if (right == '.') {
		q->right = NULL;
	}
	else {
		while (p->data != right) {
			p = p->link;
		}
		q->right = p;
		//printf("%c", q->right->data);
	}
}

void deorder(tree_node* A) {
	if (A) {
		printf("%c", A->data);
		deorder(A->left);
		deorder(A->right);
	}
}
void middle(tree_node* A) {
	if (A) {
		middle(A->left);
		printf("%c", A->data);
		middle(A->right);
	}
}
void inorder(tree_node* A) {
	if (A) {
		inorder(A->left);
		inorder(A->right);
		printf("%c", A->data);
	}
}

int main(void) {
	tree_node* A = (tree_node*)malloc(sizeof(tree_node));
	A->data = 'A';
	A->right =A->left= NULL;
	
	//단일연결리스트로 만들어줌
	tree_node* q = A;
	for (int i = 0; i < 25; i++) {
		q = insert(q, (char)(i + 66));
	}

	int input;
	scanf("%d", &input);
	for (int i = 0; i < input; i++) {
		char head;
		char left;
		char right;
		scanf(" %c",&head);
		scanf(" %c", &left);
		scanf(" %c", &right);
		connect(A, head, left, right);
	}
	//printf("%c", A->left->left->data);
	deorder(A);//전위순회
	printf("\n");
	middle(A);//중위순회
	printf("\n");
	inorder(A);//후위순회


}
