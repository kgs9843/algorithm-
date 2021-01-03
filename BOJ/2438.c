#include<stdio.h>
int main(){
	int a;
	int i,j=1;
	scanf("%d",&a);
	int c=1;
	for(i=0;i<a;i++){
		j=1;
		while(j<=c){
			printf("*");
			j=j+1;
		}
		c=c+1;
		printf("\n");
	}
}
