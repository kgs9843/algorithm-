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
	
	return 0;
	
}
