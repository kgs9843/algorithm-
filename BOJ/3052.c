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
	int j=9;
	for(int i=0;i<9;i++){
		if(j!=9)continue;
		for(j=i+1;j<10;j++){
			if(num[i]==num[j]){
				count++;
				break;
			}
		}
	}
	printf("%d",count);
}
