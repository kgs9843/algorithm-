#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int dp[1005][1005]; //배열 M
int array[1005][1005];

int main() {
	while (1) {
		int rows, cols;

		scanf("%d %d", &rows, &cols);
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				scanf("%d", &array[i][j]);
			}
		}
		if (rows == 0 && cols == 0) {
			break;
		}

		/*
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				scanf("%d", &array[i][j]);
			}
		}

		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				printf("%d ", array[i][j]);
			}
			printf("\n");
		}
		*/

		/*
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				printf("%d ",dp[i][j]);
			}
			printf("\n");
		}
		*/

		int answer = 0;
		for (int i = 1; i < rows; i++) {
			for (int j = 1; j < cols; j++) {
				if (array[i][j] == 1) {
					int min = array[i - 1][j];
					if (min > array[i][j - 1]) min = array[i][j - 1];
					if (min > array[i - 1][j - 1])min = array[i - 1][j - 1];
					array[i][j] = min + 1;
				}
			}
		}
		
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				//printf("%d ", dp[i][j]);
				if (answer < array[i][j]) {
					answer = array[i][j];
				}
			}

			//printf("\n");
		}
		
		printf("%d\n", answer);
	}

}
