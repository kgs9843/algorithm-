#include<stdio.h>
int dp[1001] = { 0. };
int array[1001];
int main(void) {
	int MAX = 0;
	int input;
	scanf("%d", &input);
	for (int i = 0; i < input; i++) {
		scanf("%d", &array[i]);
		dp[i] = 1;
	}
	for (int i = 1; i < input; i++) {
		for (int j = i-1; j >= 0; j--) {
			if (array[i] > array[j]) {
				if (dp[i] < dp[j] + 1) {
					dp[i] = dp[j] + 1;
				}
			}
		}
	}
	
	for (int i = 0; i < input; i++) {
		if (MAX < dp[i]) {
			MAX = dp[i];
		}
		//printf("%d ", dp[i]);
	}
	printf("%d", MAX);
}
