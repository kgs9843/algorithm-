#include<stdio.h>
int main(){
	unsigned int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(b>c){
		printf("-1");
		return 0;
	}
	unsigned long long int answer=1;
	unsigned long long int bb=b;
	unsigned long long int cc=c;
	while(a+b>=c){
		b=b+bb;
		c=c+cc;
		answer++;
	}
	printf("%llu",answer);
	return 0;
}
