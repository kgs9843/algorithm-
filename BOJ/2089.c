#include <stdio.h>

void toMinus2Binary(long long n) {
    if (n == 0) {
        printf("0\n");
        return;
    }

    char binary[64]; // 최대 64비트를 사용한다고 가정
    int idx = 0;

    while (n != 0) {
        if (n % -2 < 0) {
            binary[idx++] = '1';
            n = (n / -2) + 1;
        }
        else {
            binary[idx++] = (n%-2)+'0';
            n = n / -2;
        }
    }

    for (int i = idx - 1; i >= 0; i--) {
        printf("%c", binary[i]);
    }

    printf("\n");
}

int main() {
    long long num;
    scanf("%lld", &num);
    toMinus2Binary(num);

    return 0;
}
