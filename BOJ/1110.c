#include <stdio.h>
int main(void){
	int c,n,f,s,sum=1;
	scanf("%d",&n);
	int n2=n;
	while(1){
		if (n2<10){
			n2=(n2*10)+n2;
		}
		else {
			f=n2/10;
			s=n2%10;
			c=f+s;
			if(c>=10){
				c=c%10;
			}
			n2=(s*10)+c;
		}
		if(n==n2){
			break;
		}
		sum++;
		//printf("%d ",n2);
	}
	printf("%d",sum);
}
