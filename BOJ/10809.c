#include<stdio.h>
int main(){
	char s[101]="";
	scanf("%s",s);
	int j=0;
	while(s[j]!='\0'){
		j++;
	}
	int a[26];
	int i;
	for(i=0;i<26;i++){
		a[i]=-1;
		//printf("%d ",a[i]);
	}
	int nb[j];
	for(i=0;i<j;i++){
		nb[i]=s[i]-97;
		printf("%d ",nb[i]);
	}
}
