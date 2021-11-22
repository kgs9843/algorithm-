#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,j;
	while(n!=1){
		for(i=2;i<=n;i++){
			if(n%i==0){
				printf("%d\n",i);
				break;
			}
		}
		n=n/i;
	}
	return 0;
}
