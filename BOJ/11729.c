#include <stdio.h>
int count=1;
void pibo(int t,int from,int mid,int to){
	count++;
	if(t==1){
		printf("%d %d\n",from,to);
		return;
	}
	pibo(t-1,from,to,mid);
	printf("%d %d\n",from,to);
	pibo(t-1,mid,from,to);
}
int main(){
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		count=count*2;
	}
	printf("%d\n",count-1);
	pibo(t,1,2,3);
	return 0;
}
