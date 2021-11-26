#include <stdio.h>
int main(){
	int x,y,w,h;
	scanf("%d %d %d %d",&x,&y,&w,&h);
	int a[4];
	a[0]=w-x;
	a[1]=x;
	a[2]=h-y;
	a[3]=y;
	int i;
	int min=a[0];
	for(i=0;i<4;i++){
		//printf("%d ",a[i]);
		if(min>a[i]){
			min=a[i];
		}
	}
	printf("%d",min);
	return 0;
}
