#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int weghit[50]={0,};
	int tall[50]={0,};
	int answer[50]={0,};
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d %d",&weghit[i],&tall[i]);
	}
	int count;
	for(i=0;i<n;i++){
		count=0;
		for(j=0;j<n;j++){
			if(j==i)continue;
			if(weghit[i]<weghit[j]&&tall[i]<tall[j]){
				count++;
			}
		}
		answer[i]=count+1;
	}
	for(i=0;i<n;i++){
		printf("%d ",answer[i]);
	}
	return 0;
}
