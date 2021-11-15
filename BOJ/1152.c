#include<stdio.h>
int main(){
	char s[1000001];
	scanf("%[^\n]s",&s);
	int count=0;
	while(s[count]!=NULL)count++;
	int answer=1;
	int change;
	int x=0;
	for(int i=0;i<count;i++){
		change=s[i];
		if(x==0){
			if(change!=32){
				x=1;
			}
		}
		if(i==0||i==count-1){
			if(s[i]==' ')continue;
		}
		else if(s[i]==' '){
			answer++;
		}
	}
	if(x==0){
		printf("0");
	}
	else{
		printf("%d",answer);
	}
	return 0;
}
