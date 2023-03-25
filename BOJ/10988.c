#include<stdio.h>
#include<string.h>
int main(void) {
	char word[101];
	scanf("%s", word);
	char word_revenge[101];
	int k = strlen(word)-1;
	for(int i=0;i< strlen(word);i++){
		word_revenge[i] = word[k--];
	}

	int answer = 1;
	for (int i = 0; i < strlen(word); i++) {
		if(word_revenge[i] != word[i])answer=0;
	}

	printf("%d", answer);
	return 0;

}
