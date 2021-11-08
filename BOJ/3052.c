#include <stdio.h>


int main()
{	
	int num[10];
	int a;
	for(int i=0;i<10;i++){
		scanf("%d",&a);
		num[i]=a%42;
	}
	int count=0;
	int j=10;
	for(int i=0;i<9;i++){
		//printf("%d ",j);
		if(j!=10)continue;
		for(j=i+1;j<10;j++){
			if(num[i]==num[j]){
				count++;
				break;
			}
		}
	}
	printf("%d",10-count);
}
