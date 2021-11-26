#include <stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int u[2000000]={0,};
	int qu;
	int i,j;
	for(i=1;i<=n;i++){
		if(i<2){
			u[i]=-1;
		}
		if(u[i]==-1){
			continue;
		}
		//printf("%d ",i);
		qu=0;
		j=2;
		while(qu<=n){
			qu=i*j;
			u[qu]=-1;
			j++;
		}
	}
	for(i=m;i<=n;i++){
		if(u[i]!=-1)printf("%d\n",i);
	}
	return 0;
}
