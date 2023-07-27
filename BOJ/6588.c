#include<stdio.h>
# define MAX 1000001

int array[MAX] = { 0 };

void f(int* array) {
	for (int i = 2; i < MAX; i++) {
		array[i] = i;
	}
	for (int i = 2; i < MAX; i++) {
		if (array[i] == 0) {
			continue;
		}
		for (int j = i * 2; j < MAX; j = j + i) {
			array[j] = 0;
		}
	}

}

int main(void) {
	f(array);
	int input;
	do {
		scanf("%d", &input);
		int a = input / 2 +1;
		int i;
		for (i = 2; i <=a; i++) {
			if (array[i]==0) {
				continue;
			}
			if (i+ array[input - i] == input) {
				printf("%d = %d + %d\n", input, i, input - i);
				break;
			}
		}
		if (i == a) {
			printf("Goldbach's conjecture is wrong.\n");
		}
	} while (input != 0);

}
