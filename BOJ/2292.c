#include<stdio.h>
int main(){
	unsigned long long int n;
	scanf("%llu",&n);
	unsigned long long int front=1,back=7;
	if(n==1){
		printf("1");
		return 0;
	}
	unsigned long long int count=1;
	while((front>n)||(back<n)){
		front=back+1;
		count++;
		//printf("%llu ",back);
		back=6*count+back;
	} 
	printf("%llu",count+1);
	return 0;
}
