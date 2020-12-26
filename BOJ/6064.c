#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
	int a,M,n,x,y,c1,c2,p,z;
	int i,j,k;
	scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%d %d %d %d",&M,&n,&x,&y);
		int aa=0;
		j=0;
		while((j%M)+1!=M||(j%n)+1!=n){
			if((j%M)+1==x){
				if((j%n)+1==y){
					printf("%d\n",j+1);
					aa=1;
					break;	
				}
				j=j+M;
				if(M*n<j){
					break;
				}
			}
			else{
				j=j+1;
			}
		}
		if(x==M&&y==n){
			printf("%d\n",j+1);
		}
		else if(aa==0){
			printf("%d\n",-1);
		}
		 
		
	}
}
