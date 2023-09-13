#include<stdio.h>
#define MAX 100000

int array[MAX][2];
int dp[MAX][2];

int max(int a, int b) {
	if (a > b) {
		//printf("%d\n", a);
		return a;
	}
	//printf("%d\n", a);
	return b;
}

int main(void) {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int input;
		int j;
		scanf("%d", &input);
		for (j = 0; j < input; j++) {
			scanf("%d", &array[j][0]);
		}
		for (j = 0; j < input; j++) {
			scanf("%d", &array[j][1]);
		}
		dp[0][0] = array[0][0];
		dp[0][1] = array[0][1];
		
		for (j = 1; j < input; j++) {
			if (j == 1) {
				dp[j][0] = dp[j-1][1] + array[j][0];
				dp[j][1]=dp[j-1][0] + array[j][1];
			}
			else {
				dp[j][0] = max(dp[j - 1][1], dp[j - 2][1]) + array[j][0];
				dp[j][1] = max(dp[j - 1][0], dp[j - 2][0]) + array[j][1];
			}
			//printf("%d %d\n", dp[j][0], dp[j][1]);
		}
		printf("%d\n", max(dp[j-1][0], dp[j-1][1]));


		//초기화부분
		for(j = 0; j < input; j++) {
			array[j][0] = 0;
			array[j][1] = 0;
			dp[j][0] = 0;
			dp[j][1] = 0;
		}
	}

}
