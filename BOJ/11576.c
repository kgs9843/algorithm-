#include<stdio.h>
#include<string.h>


int array[100];

int stack[100];
int top = -1;

int main(void) {
	int input1, input2;
	int number;
	scanf("%d %d", &input1,&input2);
	scanf("%d", &number);
	for (int i = 0; i < number; i++) {
		scanf("%d", &array[i]);
	}

	int dem = 0;
	int q = 1;
	for (int i = number - 1; i >= 0; i--) {
		dem = q * array[i] + dem;
		q = q * input1;
	}
	int i = dem;
	while (i/input2 !=0) {
		stack[++top] = i % input2;
		i = i / input2;
	}
	stack[++top] = i % input2;
	
	while (top > -1) {
		printf("%d ", stack[top]);
		top = top - 1;
	}
}
