#include<stdio.h>
#define MOD 1000000000

long long int dp[102][11];
int main(void) {
	dp[1][0] = 0;
	for (int i = 1; i <= 9; i++) {
		dp[1][i] = 1;
	}
	//0 1 1 1 1 1 1 1 1 9=1
	//1 1 2 2 2 2 2 2 2 1
	for (int i = 2; i <= 100; i++) {
		for (int j = 0; j <= 9; j++) {
			if (j != 0 || j != 9) {
				dp[i][j] = (dp[i - 1][j + 1] + dp[i - 1][j - 1])%MOD;
			}
			if (j == 0) {
				dp[i][j] = dp[i - 1][j + 1]%MOD;
			}
			if (j == 9) {
				dp[i][j] = dp[i - 1][j - 1]%MOD;
			}
		}
	}
	int input;
	scanf("%d", &input);
	long long int sum = 0;
	for (int i = 0; i <= 9; i++) {
		//printf("%d", dp[2][i]);
		sum = sum + dp[input][i];
	}
	printf("%llu", sum%MOD);
}
