#include<stdio.h>
#define MAX 1001

int array[MAX] = { 0, };

int main(void) {
	int input;
	scanf("%d", &input);
	for (int i = 1; i <= input; i++) {
		scanf("%d", &array[i]);
	}
	for (int i = 1; i <= input; i++) {
		int max = array[i];
		int c=0;
		for (int j = 1; j <= i / 2; j++) {
			c = array[j] + array[i-j];
			if (c > max) {
				max = c;
			}
			c = 0;
		}
		array[i] = max;
	}
	printf("%d", array[input]);
}
