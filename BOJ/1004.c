#include<stdio.h>
#include<math.h>
int main(){
	int a,i,j,k;
	scanf("%d",&a);
	for (i=1;i<=a;i++){
		int x1,y1,x2,y2,n,m=0;
		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
		scanf("%d",&n);
		for (j=1;j<=n;j++){
			int cx,cy,r,b,c;
			scanf("%d %d %d",&cx,&cy,&r);
			b=pow(x1-cx,2)+pow(y1-cy,2);
			c=pow(x2-cx,2)+pow(y2-cy,2);
			if(b<pow(r,2)||c<pow(r,2)){
				if(b<pow(r,2)&&c<pow(r,2)){
				}
				else{
					m=m+1;
				}
			}
		}
		printf("%d\n", m);
	}
}
