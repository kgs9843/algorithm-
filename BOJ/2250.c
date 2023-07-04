#include<stdio.h>
#include<stdlib.h>
# define MAX 10001

typedef struct node {
	int head;
	int right;
	int left;
}node;

node tree[MAX];
int row[MAX];//열
int colum[MAX];//행
int min_row[MAX];//열에대한최솟값행렬,레벨(행)이 인덱스임
//즉 1레벨에서의 최솟값과 최댓값을 저장해준다.
int max_row[MAX];//열에대한최댓값행렬


int node_count=0;//열 갯수
void inorder(int root, int count) {
	if (tree[root].left != -1) {
		inorder(tree[root].left, count + 1);
	}
	node_count++;
	colum[root] = count;
	row[root] = node_count;
	if (tree[root].right != -1) {
		inorder(tree[root].right, count + 1);
	}
}

int main(void) {
	int input,i;
	scanf("%d", &input);
	for (i = 1; i <= input; i++) {
		tree[i].left = -1;
		tree[i].right = -1;
		tree[i].head = 0;
		min_row[i] = input;
		max_row[i] = 0;
	}
	for (i = 1; i <= input; i++) {
		int node, left, right;
		scanf("%d %d %d", &node, &left, &right);
		tree[node].left = left;
		tree[node].right = right;
		if(left!=-1){
			tree[left].head = left;
		}
		if (right != -1) {
			tree[right].head = right;
		}
	}
	int root;
	for (i = 1; i <= input; i++) {
		if (tree[i].head == 0) {
			root = i;
			break;
		}
	}
	//printf("%d", root);
	inorder(root,1);
	for (i = 1; i <= input; i++) {
		int r = row[i];
		int c = colum[i];
		if (min_row[c] > r) {
			min_row[c] = r;
		}
		if (max_row[c] < r) {
			max_row[c] = r;
		}
	}
	int max_width = 0;
	int max_level = 0;
	for (i = 1; i <= input; i++) {
		int width = max_row[i] - min_row[i] + 1;
		if (max_width < width) {
			max_width = width;
			max_level = i;
		}
	}
	printf("%d %d", max_level, max_width);

}
