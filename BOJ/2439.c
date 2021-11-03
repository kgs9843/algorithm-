#include<stdio.h>
int main(){
	int a,b,n;
	scanf("%d",&n);
	a=n-1;
	for(int i=1;i<=n;i++){
		for(int k=1;k<=a;k++){
			printf(" ");
		}
		for(int j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
		a=a-1;
	}
}
