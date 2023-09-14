#include <stdio.h>

int dp[10001];
int array[10001];

int max(int a, int b) {
    return a > b ? a : b;
}

int main(void) {
    int input;
    scanf("%d", &input);

    for (int i = 1; i <= input; i++) {
        scanf("%d", &array[i]);
    }

    dp[0] = 0;
    dp[1] = array[1];
    dp[2] = array[1] + array[2];

    for (int i = 3; i <= input; i++) {
        dp[i] = max(dp[i - 1], max(dp[i - 2] + array[i], dp[i - 3] + array[i - 1] + array[i]));
    }

    printf("%d\n", dp[input]);

    return 0;
}
