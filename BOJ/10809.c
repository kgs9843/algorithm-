#include<stdio.h>
int main(){
	char s[101]="";
	scanf("%s",s);
	int j=0;
	while(s[j]!='\0'){
		j++;
	}
	int a[26];
	int i,k;
	for(i=0;i<26;i++){
		a[i]=-1;
		//printf("%d ",a[i]);
	}
	for(i=0;i<j;i++){
		int change=s[i];
		//printf("%d ",change);
		for(k=0;k<26;k++){
			if (change==k+97){
				if(a[k]!=-1)break;
				a[k]=i;
			}
		}
	}
	for(i=0;i<26;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
