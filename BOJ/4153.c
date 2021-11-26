#include <stdio.h>
int main(){
	while(1){
		int a[3];
		scanf("%d %d %d",&a[0],&a[1],&a[2]);
		if(a[0]==0&&a[1]==0&&a[2]==0)break;
		int max=0,i;
		for(i=0;i<3;i++){
			if(max<a[i]){
				max=a[i];
			}
		}
		int sum=0;
		for(i=0;i<3;i++){
			if(a[i]==max)continue;
			sum=(a[i]*a[i])+sum;
		}
		max=max*max;
		if(max==sum)printf("right");
		else{
			printf("wrong");
		}
		printf("\n");
	}
	return 0;
}
