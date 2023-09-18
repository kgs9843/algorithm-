#include<stdio.h>
int dp[31];

int f(int a) {
	if (a < 0) {
		return 1;
	}
	return a;
}
int main() {
	/*
	
	dp[1] = 0;
	dp[2] = 3;
	dp[3] = 0;
	dp[4] = dp[4-2] * 3 + dp[4-4]*2; // 9+2=11
	dp[5] = 0;
	dp[6] = dp[6 - 2] * 3 + dp[6 - 4] * 2 + dp[6 - 6] * 2;// 39+2=41
	*/
	dp[0] = 1;
	for (int i = 1; i <= 30; i++) {
		if (i % 2 == 1)	dp[i] = 0;
		else {
			int sum = 0;
			sum = dp[i - 2] * 3;
			for (int j = 2; i - (2 * j) >= 0; j++) {
				sum = sum + dp[i - (2 * j)] * 2;
			}
			dp[i] = sum;
			//dp[i] = dp[f(i - 2)] * 3 + dp[f(i - 4)] * 2 + dp[f(i - 6)] * 2;
		}
	}
	// dp[i] =dp[i-2]*3 + dp[i-2n]*2 (n은 2부터 i-2n이 음수가 될 동안)
	int input;
	scanf("%d", &input);
	printf("%d", dp[input]);
}
