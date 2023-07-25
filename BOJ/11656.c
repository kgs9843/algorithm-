#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1001

typedef struct book {
    char s[MAX];
} book;

int compare(const book* a, const book* b) {
    return strcmp(a->s, b->s);
}

int main(void) {
    char s[MAX];
    int i;
    fgets(s, MAX, stdin); // fgets를 사용하여 입력 받음
    int length = strlen(s);
    if (s[length - 1] == '\n') {
        s[length - 1] = '\0'; // fgets는 개행 문자를 포함하여 입력받기 때문에, 개행 문자를 널 문자로 바꿔줌
    }
    length = strlen(s); // 개행 문자를 제거했으므로 문자열 길이 다시 계산

    book aa[MAX];
    for (i = 0; i < length; i++) {
        int k2 = 0;
        for (int j = i; j < length; j++) {
            aa[i].s[k2] = s[j];
            k2++;
        }
        aa[i].s[k2] = '\0';
    }

    qsort(aa, length, sizeof(book), compare);

    for (i = 0; i < length; i++) {
        printf("%s\n", aa[i].s);
    }

    return 0;
}
