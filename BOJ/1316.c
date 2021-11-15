#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	int i,j,k;
	char word[n][101];
	for(i=0;i<n;i++){
		scanf("%s",word[i]);
	}
	int stlen[n];
	for(i=0;i<n;i++){
		stlen[i]=strlen(word[i]);
		//printf("%d ",stlen[i]);
	}
	int answer=0;
	for(k=0;k<n;k++){
		int key=0;
		for(i=0;i<stlen[k];i++){
			for(j=i+1;j<stlen[k];j++){
				if(word[k][i]==word[k][j]){
					if(word[k][j-1]!=word[k][i]){
						key=1;
						break;
					}
				}
			}
			if(key==1){
				break;
			}
		}
		if(key==0){
			answer++;
		}
	}
	printf("%d",answer);
	return 0;
}
