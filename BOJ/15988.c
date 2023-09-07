#include<stdio.h>
#define MAX 1000001
#define MOD 1000000009

long long int dp[MAX];
int main(void) {
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	
	for (int i = 4; i < MAX; i++) {
		dp[i] = dp[i - 1] % MOD + dp[i - 2] % MOD + dp[i - 3] % MOD;
	}
	int input;
	scanf("%d", &input);

	for (int i = 0; i < input; i++) {
		int a;
		scanf("%d", &a);
		printf("%llu\n",dp[a]%MOD);
	}
	
}
