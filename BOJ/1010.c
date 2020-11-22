#include<stdio.h>
unsigned long long int f(unsigned long long int a,int* c){
	unsigned long long int i;
	unsigned long long int b=1;
	for(i=a;i>=1;i--){
		b=b*i;
		*c=*c+1;
	}
	return b;
}
unsigned long long int g(unsigned long long int a,int* c){
	unsigned long long int i;
	unsigned long long int b=1;
	i=a;
	while(*c!=0){
		b=i*b;
		i=i-1;
		*c=*c-1;
	}
	return b;
}
int main(){
	int a;
	int i,j,k;
	scanf("%d",&a);
	for (i=1;i<=a;i++){
		unsigned long long int x,y,r;
		int c=0;
		scanf("%llu %llu",&x,&y);
		if((y/2)<x){
			x=y-x;
		}
		x=f(x,&c);
		y=g(y,&c);
		r=y/x;
		printf("%llu\n",r);
	}
}
