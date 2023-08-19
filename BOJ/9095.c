#include<stdio.h>
#define MAX 12

int array[MAX];

int main(void) {
	array[1] = 1;
	array[2] = 2;
	array[3] = 4;
	for (int i = 4; i < MAX; i++) {
		array[i] = array[i - 3] + array[i - 2] + array[i - 1];
	}
	int input;
	scanf("%d", &input);
	for (int i = 0; i < input; i++) {
		int a;
		scanf("%d", &a);
		printf("%d\n", array[a]);
	}
}
