#include <stdio.h>
int fac(int n){
	if(n==1||n==0){
		return 1;
	}
	n=n*fac(n-1);
	return n;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",fac(n));
	return 0;
}
