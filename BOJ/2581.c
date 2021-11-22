#include <stdio.h>
int main()
{
	int m,n;
	int i,j;
	scanf("%d",&m);
	scanf("%d",&n);
	int com;
	int answer=0;
	int answer2=n;
	for(i=m;i<=n;i++){
		if(i<2){
			continue;
		}
		com=1;
		for(j=2;j<i;j++){
			if(i%j==0){
				com=0;
				break;
			}
		}
		if(com==1){
			answer=answer+i;
			if(answer2>i){
				answer2=i;
			}
		}
	}
	if(answer==0){
		printf("%d",-1);
	}
	else{
		printf("%d\n%d",answer,answer2);
	}
	
	
	return 0;
}
