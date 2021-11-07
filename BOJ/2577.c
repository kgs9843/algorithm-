#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x=1;
	int a;
	for(int i=0;i<3;i++){
		scanf("%d",&a);
		x=x*a;
	}
	printf("%d\n",x);
	char c[100];
	sprintf(c,"%d",x);
	printf("%s",c[0]);
}
