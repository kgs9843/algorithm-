#include <stdio.h>

int main() {
    char input[101];
    fgets(input, sizeof(input), stdin);
    for (int i = 0; input[i] != NULL; i++) {
        if (input[i] >= 'a' && input[i] <= 'z') {
            int c = input[i] + 13;
            //printf("%d", c);
            if (c > 'z') {
                c = 'a'-1 + c - 'z';
            }
            printf("%c", c);
        }
        else if (input[i] >= 'A' && input[i] <= 'Z') {
            int c = input[i] + 13;
            if (c > 'Z') {
                c = 'A' - 1 + c - 'Z';
            }
            printf("%c", c);
        }
        else {
            printf("%c", input[i]);
        }
    }
    return 0;
}
