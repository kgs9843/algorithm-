#include<stdio.h>

long long int dp[100002][3];

int main(void) {
	dp[1][0] = 1;
	dp[1][1] = 1;
	dp[1][2] = 1;
	for (int i = 2; i < 100002; i++) {
		dp[i][0] = (dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2])%9901;
		dp[i][1] = (dp[i - 1][0] + dp[i - 1][2] )% 9901;
		dp[i][2] = (dp[i - 1][1] + dp[i - 1][0]) % 9901;
	}
	int input;
	scanf("%d", &input);
	printf("%lld", (dp[input][0]+dp[input][1]+dp[input][2])%9901);
}
