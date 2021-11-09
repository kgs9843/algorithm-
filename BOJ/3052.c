#include <stdio.h>


int main()
{	
	int num[10];
	int a;
	for(int i=0;i<10;i++){
		scanf("%d",&a);
		num[i]=a%42;
	}
	
	int count;
	int i,j;
	for(i=0;i<10;i++){
		count=0;
		for(j=0;j<10;j++){
			if(i==j)continue;
			if(num[i]==num[j]){
				num[j]=-1;
			}
		}
		if(num[i]==-1)continue;
	}
	for(i=0;i<10;i++){
		if(num[i]>=0){
			count++;
		}
	}
	printf("%d",count);
}
