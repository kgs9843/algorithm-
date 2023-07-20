#include<stdio.h>
# define MAX 101

int alphabat[MAX] = { 0 ,};

int main(void) {
	char input[MAX];
	scanf("%s", input);
	int i = 0;
	while (input[i] != NULL) {
		int a = input[i] - 'a';
		alphabat[a]++;
		i++;
	}
	for (i = 0; i < 26; i++) {
		printf("%d ", alphabat[i]);
	}
}
