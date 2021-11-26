#include <stdio.h>
int main()
{
	int k=1;
	while(1){
		scanf("%d",&k);
		if(k==0){
			break;
		}
		int u[2000000]={0,};
		int qu;
		int i,j;
		for(i=1;i<=2*k;i++){
			if(i<2){
				u[i]=-1;
			}
			if(u[i]==-1){
				continue;
			}
			//printf("%d ",i);
			qu=0;
			j=2;
			while(qu<=2*k){
				qu=i*j;
				u[qu]=-1;
				j++;
			}
		}
		int answer=0;
		for(i=k+1;i<=2*k;i++){
			if(u[i]!=-1)answer++;
		}
		printf("%d\n",answer);
	}
	return 0;
}
