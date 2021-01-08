#include<stdio.h>
#include<string.h>
int main(){
	int N,c;
	int i,j,k;
	scanf("%d",&N);
	char s[N][51];
	for(i=0;i<N;i++){
		scanf("%s",s[i]);
	}
	char ss[51];
	strcpy(ss,s[0]);
	//printf("%s ",ss);
	//printf("\n\n");
	for(i=0;i<=N-2;i++){
		for(j=i+1;j<=N-1;j++){
			for(k=0;k<strlen(s[i]);k++){
				if(ss[k]!=s[j][k]){
					ss[k]='?';
				}
			}
		}
	}
	printf("%s",ss);
	return 0;
}
