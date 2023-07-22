#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {
	char answer1[50] = { 0 };
	char answer2[50] = { 0 };
	long long int answer3;
	int k = 0;
	for (int i = 0; i < 2; i++) {
		char a[8];
		scanf("%s", a);
		for (int j = 0; a[j] != NULL; j++) {
			answer1[k] = a[j];
			k++;
		}
	}
	k = 0;
	for (int i = 0; i < 2; i++) {
		char a[8];
		scanf("%s", a);
		for (int j = 0; a[j] != NULL; j++) {
			answer2[k] = a[j];
			k++;
		}
	}
	answer3 = atoll(answer1) + atoll(answer2);
	printf("%lld", answer3);
}
