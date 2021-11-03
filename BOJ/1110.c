#include<stdio.h>
int main(void){
	int a,b,c,n,f,s,sum;
	scanf("%d",&n);
	if(n==0){
		printf("1");
		return 0;
	}
	int n2=n;
	while(1){
		if (n2<10){
			c=n2;
			n2=(n2*10)+c;
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
		printf("%d ",n2);
	}
	printf("%d",sum);
	int ccc;
	scanf("%d",&ccc);
}
