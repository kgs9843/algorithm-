#include<stdio.h>
void f(int n) {
	int a=0,b=1,i;
     for(i=0;i<n;i++){
     	a=a+b;
     	b=a-b;
	 }
	printf("%d ",b);
    printf("%d\n",a);
}
int main(void){
	int a,i,j,k;
	scanf("%d",&a);
	for (i=1;i<=a;i++){
		int b;
		scanf("%d",&b);
		if (b==0){
			printf("%d %d\n",1,0);
		}
		else{
			f(b);
		}
	}
	
}
