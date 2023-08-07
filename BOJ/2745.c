#include<stdio.h>
#include<string.h>

int change(char q) {
	if (q >= 'A' && q <= 'Z') {
		q = q - 'A' + 10;
	}
	else if (q >= 'a' && q <= 'z') {
		q = q - 'a' + 10;
	}
	else if (q >= '0' && q <= '9') {
		q = q - '0';
	}
	return q;
}


int main(void) {
	char input[100000];
	int convert;
	scanf("%s %d", input,&convert);
	int len = strlen(input);
	int answer = 0;
	int q = 1;
	for (int i = len - 1; i >= 0; i--) {
		int c= change(input[i]);
		answer = q * c + answer;
		q = q * convert;
	}
	printf("%d", answer);
}
