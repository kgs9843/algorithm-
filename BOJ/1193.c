#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int count=0;
	int i=1;
	int process=0;
	int number;
	while(count<n){
		count=count+i;
		number=i;
		process=i-1+process;
		i++;
	}
	process=n-process;
	//printf("%d ",number);
	int up;
	int down;
	if(number%2==1){
		up=number;
		down=1;
		for(i=1;i<process;i++){
			up--;
			down++;
		}
		printf("%d/%d",up,down);
	}
	else{
		up=1;
		down=number;
		for(i=1;i<process;i++){
			up++;
			down--;
		}
		printf("%d/%d",up,down);
	}
	return 0;
}
