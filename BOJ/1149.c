#include<stdio.h>

int array[1002][3];
int dp[1002][3];

int min(int a, int b) {
	if (a > b) {
		return b;
	}
	else return a;
}
int compare(int a, int b, int c) {
	if (a < b && a < c) {
		return a;
	}
	if (b < c && b < a) {
		return b;
	}
	if (c < b && c < a) {
		return c;
	}
	return a;
}


int main() {
	int input;
	scanf("%d", &input);
	for (int i = 0; i < input; i++) {
		int r, g, b;
		scanf("%d %d %d", &array[i][0], &array[i][1], &array[i][2]);
	}
	for (int i = 0; i < input + 1; i++) {
		for (int j = 0; j < 3; j++) {
			dp[i][j] = 0;
		}
	}
	for(int i = 1; i < input+1; i++) {
		dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + array[i-1][0];
		dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + array[i - 1][1];
		dp[i][2]= min(dp[i - 1][0], dp[i - 1][1]) + array[i - 1][2];
	}
	int min=compare(dp[input][0], dp[input][1], dp[input][2]);
	printf("%d", min);
}
