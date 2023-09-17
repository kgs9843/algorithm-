#include<stdio.h>

int array[1001];
int dp[1001];

int min(a, b) {
	if (a > b) {
		return b;
	}
	return a;
}
int main(void) {
	int input;
	scanf("%d", &input);
	for (int i = 0; i < input; i++) {
		scanf("%d", &array[i]);
		dp[i] = 1;
	}

	for (int i = 1; i <= input; i++) {
		for (int j = 0; j < i; j++) {
			if (array[j] > array[i]) {
				if (dp[i] < dp[j] +1) {
					dp[i] = dp[j]+1;
				}
			}
		}
	}
	int max = 0;
	for (int i = 0; i < input; i++) {
		if (max < dp[i]) {
			max = dp[i];
		}
		//printf("%d ", dp[i]);
	}
	printf("%d", max);
}
