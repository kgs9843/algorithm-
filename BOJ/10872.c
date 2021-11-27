#include <stdio.h>
int i=1,answer=1;
int fac(n){
	answer=answer*i;
	if(i<n){
		i++;
		fac(n);
	}
	else{
		return answer;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	answer=fac(n);
	printf("%d",answer);
	return 0;
}
