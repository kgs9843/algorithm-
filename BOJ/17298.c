#include<stdio.h>
#define MAX 1000001

int nums[MAX];
int nge[MAX];

int stack[MAX];
int top = -1;

int main(void) {
	int n, i;
	scanf("%d", &n);


	for (i = 0; i < n; i++) {
		scanf("%d", & nums[i]);
	}

	for (i = 0; i < n; i++) {
		while (top >= 0 &&nums[stack[top]]<nums[i]) {
			nge[stack[top]] = nums[i];
			top--;
		}
		stack[++top] = i;
	}
	while (top > -1) {
		nge[stack[top]] = -1;
		top--;
	}
	for (i = 0; i < n; i++) {
		printf("%d ", nge[i]);
	}

}
