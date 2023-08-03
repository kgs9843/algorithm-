#include<stdio.h>
#include<math.h>
#define MAX 1000001
int array[MAX];
void f(int* array) {
    int i, j;

    for (i = 2; i <= sqrt(MAX); i++) {	// 최대값의 제곱근까지 반복
        if (array[i] == 0) {		//i가 소수이면
            for (j = 2; i * j < MAX; j++) {	// 자신을 제외한 i의 배수 제거
                array[i * j] = 1;
            }
        }
    }

    /*for (i = 2; i < MAX; i++) {
        if (array[i] == 0) printf("%d\n", i);
    }*/
}

int main(void) {
	f(array);
    int input;
    scanf("%d", &input);
    for (int i = 0; i < input; i++) {
        int count = 0;
        int ques;
        scanf("%d", &ques);
        for (int j = 2; j <= ques/2; j++) {
            if (array[j] == 0 && array[ques - j] == 0) {
                count++;
            }
        }
        printf("%d\n", count);
    }
}
