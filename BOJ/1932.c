#include<stdio.h>

int dp[500][500];
int array[500][500];

int max(int a, int b) {
	if (a < b) {
		return b;
	}
	return a;
}
int main(void) {
	int input;
	scanf("%d", &input);
	for (int i = 0; i < input; i++) {
		for (int j = 0; j <= i; j++) {
			scanf("%d", &array[i][j]);
		}
	}
	dp[0][0] = array[0][0];
	for (int i = 1; i < input; i++) {
		for (int j = 0; j <=i; j++) {
			if (j - 1 < 0) {
				dp[i][j] = dp[i-1][j]+array[i][j];
			}
			else {
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1]) + array[i][j];

			}
		}
	}
	int max = 0;
	for (int i = 0; i < input; i++) {
		if (max < dp[input - 1][i]) {
			max = dp[input - 1][i];
		}
	}
	printf("%d", max);
}
