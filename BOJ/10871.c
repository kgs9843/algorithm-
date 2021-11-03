#include<stdio.h>
int main(){
	int b,n,x;
	scanf("%d %d",&n,&x);
	int a[10000]={0};
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		if(a[i]<x)printf("%d ",a[i]);
	}
}
