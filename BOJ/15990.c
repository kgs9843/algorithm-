#include<stdio.h>
#define MAX 100001
#define MOD 1000000009

long long int array[MAX][4] = { {0,}, };



int main(void) {
	//array[1][1] = array[2][2] = array[3][3] = 1;
	for (int i = 1; i < MAX; i++) {
		if (i - 1 >= 0) {
			array[i][1] = (array[i - 1][2] + array[i - 1][3]) % MOD;
			if (i == 1) {
				array[i][1] = 1;
			}
		}
		if (i - 2 >= 0) {
			array[i][2] = (array[i - 2][1] + array[i - 2][3]) % MOD;
			if (i == 2) {
				array[i][2] = 1;
			}
		}
		if (i - 3 >= 0) {
			array[i][3] = (array[i - 3][2] + array[i - 3][1]) % MOD;
			if (i == 3) {
				array[i][3] = 1;
			}
		}
	}

	int input;
	scanf("%d", &input);
	for (int i = 0; i < input; i++) {
		int t;
		scanf("%d", &t);
		printf("%lld\n", (array[t][1] + array[t][2] + array[t][3]) % MOD);
	}
}
