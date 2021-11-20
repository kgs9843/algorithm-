#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i=n;
	int answer=0;
	while(i>0){
		if(i%5==0){
			answer=answer+(i/5);
			break;
		}
		i=i-3;
		answer++;
	}
	if(i<0){
		printf("-1");
	}
	else{
		printf("%d",answer);
	}
	

	return 0;
}
