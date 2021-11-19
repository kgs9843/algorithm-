#include <stdio.h>

int main()
{
	int a,b,v;
	scanf("%d %d %d",&a,&b,&v);
	int answer=1;
	int variable=a-b;
	if(a>=v){
		printf("1");
		return 0;
	}
	int onet=v-a;
	int speed=(onet)/variable;
	int speed2=onet%variable;
	if(speed2>0)speed++;
	
	printf("%d",speed+1);
	return 0;
}
