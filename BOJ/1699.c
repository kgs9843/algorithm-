#include<stdio.h>

int dp[100002];

int main(void) {
	int input;
	scanf("%d", &input);
	for (int i = 0; i < input+1; i++) {
		dp[i] = i;
	}
	for (int i = 0; i < input+1; i++) {
		for (int j = 1; j <= i; j++) {
			if (j * j > i)break;
			else {
				if (dp[i] > dp[i - (j * j)] + 1) {
					dp[i] = dp[i - (j * j)] + 1;
				}
			}
		}
	}
	printf("%d", dp[input]);

}
