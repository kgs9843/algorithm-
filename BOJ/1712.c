#include<stdio.h>
int main(){
	unsigned long long int a,b,c;
	scanf("%llu %llu %llu",&a,&b,&c);
	if(b>=c){
		printf("-1");
		return 0;
	}
	if(a+b<c){
		printf("1");
		return 0;
	}
	else if(a+b==c){
		printf("2");
		return 0;
	}
	unsigned long long int answer=1;
	unsigned long long int process=c-b;
	printf("%llu",a/process+1);
	return 0;
	//1 30 30
}
