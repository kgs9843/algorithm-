#include<stdio.h>

long long int  dp[92][2];

int main(void) {
	dp[1][0] = 0;
	dp[1][1] = 1;
	dp[2][0] = 1;
	dp[2][1] = 0;
	for (int i = 2; i <= 90; i++) {
		for (int j = 0; j <= 1; j++) {
			if (j == 0) {
				dp[i][j] = dp[i - 1][j + 1] + dp[i - 1][j];
			}
			if (j == 1) {
				dp[i][j] = dp[i - 1][j - 1];
			}
		}
	}
	int input;
	scanf("%d", &input);
	long long int sum = 0;
	for (int i = 0; i <= 1; i++) {
		sum = dp[input][i] + sum;
	}
	printf("%lld", sum);
}
