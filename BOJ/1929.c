#include <stdio.h>
int main()
{
	//int m,n;
	//scanf("%d %d",&m,&n);
	int u[1000001]={0,};
	int qu=0;
	int i,j;
	u[0]=-1;
	for(i=1;i<=100;i++){
		if(i<2){
			u[i]=-1;
		}
		if(u[i]=='-1'){
			continue;
		}
		printf("%d ",i);
		j=2;
		while(qu<=100){
			qu=i*j;
			u[qu]=-1;
			j++;
		}
	}
	return 0;
}
