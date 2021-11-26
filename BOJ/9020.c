#include <stdio.h>
int main(){
	int k,s;
	scanf("%d",&s);
	for(k=0;k<s;k++){
		int n;
		scanf("%d",&n);
		int u[20000]={0,};
		int qu;
		int i,j;
		for(i=1;i<=n;i++){
			if(i<2){
				u[i]=-1;
			}
			if(u[i]==-1){
				continue;
			}
			qu=0;
			j=2;
			while(qu<=n){
				qu=i*j;
				u[qu]=-1;
				j++;
			}
		}
		int answer1=n/2;
		int answer2;
		for(i=answer1;i>=1;i--){
			if(u[i]!=-1){
				answer2=n-i;
				if(u[answer2]!=-1){
					break;
				}
			}
		}
		printf("%d %d\n",i,answer2);
	}
	return 0;
}
