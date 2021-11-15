#include<stdio.h>
int main(){
	char word[1000001];
	int i,j,count,wc;
	char nc;
	scanf("%s",word);
	count=0;
	while(word[count]!='\0')count++;
	for(i=0;i<count;i++){
		wc= word[i];
		if(wc<=90){
			wc=wc+32;
		}
		nc=wc;
		word[i]=nc;
	}
	int change;
	int alphabet[26]={0,};
	for(i=0;i<count;i++){
		change=word[i]-97;
		//printf("%d ",change);
		for(j=0;j<26;j++){
			if(change==j){
				alphabet[j]++;
			}
		}
	}
	int max=0;
	for(i=0;i<26;i++){
		//printf("%d ",alphabet[i]);
		if(max<alphabet[i])max=alphabet[i];
	}
	int an=0;
	char answer;
	for(i=0;i<26;i++){
		if(alphabet[i]==max){
			answer=i+65;
			an++;
		}
	}
	if(an>1)printf("?");
	else{
		printf("%c",answer);
	}
	
	return 0;
	
}
