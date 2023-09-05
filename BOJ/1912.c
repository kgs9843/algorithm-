#include<stdio.h>
#define MAX 100001
int dp[MAX] = { 0, };
int array[MAX];

int main(void) {
	int input;
	scanf("%d", &input);

	for (int i = 0; i < input; i++) {
		scanf("%d", &array[i]);
	}
	dp[0] = array[0];
	for (int i = 1; i < input; i++) {
		if (dp[i - 1] < 0) {
			dp[i] = array[i];
		}
		else {
			dp[i] = dp[i-1] + array[i];
		}
		//printf("%d\n", dp[i]);
	}
	int max = dp[0];
	for (int i = 0; i < input; i++) {
		if (max < dp[i]) {
			max = dp[i];
		}
	}
	printf("%d", max);
}
