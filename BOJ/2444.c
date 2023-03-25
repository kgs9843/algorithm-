#include<stdio.h>
int main(void) {
	int n,i,j;
	scanf("%d", &n);
	int count = 1;
	int space = n-1;
	for (i = 0; i < (2 * n) - 1; i++) {
		if (i < n) {;
			for (j = 0; j < space; j++) {
				printf(" ");
			}
			for (j = 0; j < count; j++) {
				printf("*");
			}
			count +=2;
			space--;
			printf("\n");
			if (i == n - 1) {
				count -= 2;
				space++;
			}
			continue;
		}
		count -=2;
		space++;
		for (j = 0; j < space; j++) {
			printf(" ");
		}
		for (j = 0; j <count; j++) {
			printf("*");
		}
		printf("\n");
	}
	
	return 0;

}
