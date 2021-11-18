#include <stdio.h>

int main()
{
	int a,b,v;
	scanf("%d %d %d",&a,&b,&v);
	int answer=2;
	int variable=a-b;
	if(a>=v){
		printf("1");
		return 0;
	}
	int onet=v-a;
	int speed=(onet)/variable;
	printf("%d",answer);
	return 0;
	
	
}
