//1을 만들기
#include<stdio.h>
#define MAX 1000001

int array[MAX] = { 0, };

int compare(int a, int b, int c) {
	if (a <= b && a <= c) {
		return a;
	}
	if (b <= a && b <= c) {
		return b;
	}
	else return c;

}
int main(void) {
	int input,i;
	scanf("%d", &input);
	
	array[1] = 0;
	array[2] = 1;
	array[3] = 1;
	for (i = 4; i < MAX; i++) {
		if (i % 2 != 0 && i % 3 != 0) {
			array[i] = 1 + array[i - 1];
		}
		else if (i % 2 == 0&& i%3!=0) {
			if (array[i / 2] < array[i - 1]) {
				array[i] = array[i / 2] + 1;
			}
			else array[i] = array[i - 1] + 1;
		}
		else if (i % 2 != 0 && i % 3 == 0) {
			if (array[i / 3] < array[i - 1]) {
				array[i] = array[i / 3] + 1;
			}
			else array[i] = array[i - 1] + 1;
		}
		else {
			int a=compare(array[i / 2], array[i / 3], array[i - 1]);
			array[i] = a + 1;
		}
	}
	printf("%d",array[input]);

}
