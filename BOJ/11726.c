#include<stdio.h>
#define MAX 1001

long long int array[MAX] = { 0 };


int main(void) {
	array[1] = 1;
	array[2] = 2;
	for (int i = 3; i < MAX; i++) {
		array[i] = (array[i - 1] + array[i-2])%10007;
	}
	int input;
	scanf("%d", &input);
	printf("%llu", array[input]);
}
