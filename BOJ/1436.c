#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int a,c,count;
	int answer=0;
	for(i=666;i<1000000000;i++){
		c=10;
		a=i;
		count=0;
		while(1){
			if(a%c!=6)count=0;
			else if(a%c==6){
				count++;
			}
			if(count==3||a/c==0){
				break;
			}
			a=a/c;
		}
		if(count==3){
			answer++;
		}
		if(answer==n){
			printf("%d",i);
			break;
		}
	}

	return 0;
}
