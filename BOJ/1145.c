#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
	int a,b,c,d,e,f,c1,c2,c3,m,n,end;
	int i,j,k;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	int l[5]={a,b,c,d,e};
	for(i=0;i<=2;i++){
		for(j=i+1;j<=3;j++){
			for(k=j+1;k<=4;k++){
				//printf("%d %d %d\n",l[i],l[j],l[k]);
				c1=l[i];
				c2=l[j];
				c3=l[k];
				if(c1>c2){
					m=c1;
					c1=c2;
					c2=m;
				}
				if(c2>c3){
					m=c2;
					c2=c3;
					c3=m;
				}
				n=c3;
				while(c3%c2!=0||c3%c1!=0){
					c3=c3+n;
				}
				//printf("%d ",c3);
				if(k==2){
					end=c3;	
				}
				else if(end>c3){
					end=c3;
				}

			}
		}
	}
	printf("%d",end);
	
}
