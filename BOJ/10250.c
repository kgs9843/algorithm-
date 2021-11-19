#include <stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	int i,h,w,n,j,x,y;
	for(i=0;i<t;i++){
		x=1;
		scanf("%d %d %d",&h,&w,&n);
		if(n%h==0)x=0;
		x=x+(n/h);
		y=n%h;
		if(y==0)y=h;
		if(x>=10)printf("%d%d\n",y,x);
		else{
			printf("%d0%d\n",y,x);
		}
	}
	
	return 0;
}
