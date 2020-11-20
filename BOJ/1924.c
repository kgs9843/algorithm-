#include<stdio.h>
void f(int* b){
	if (*b==0){
		*b=7;
	}
}
int main(void){
	int a,b,c,d,e;
	int i,j,k;
	char list[7][4]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	scanf("%d %d",&a,&b);
	switch(a){
		case 1:
			b=b%7;
			f(&b);
			printf("%s",list[b-1]);
			break;
		case 2:
			b=(b+3)%7;
			f(&b);
			printf("%s",list[b-1]);
			break;
		case 3:
			b=(b+3)%7;
			f(&b);
			printf("%s",list[b-1]);
			break;
		case 4://ok
			b=(b+6)%7;
			f(&b);
			printf("%s",list[b-1]);
			break;
		case 5:
			b=(b+1)%7;
			f(&b);
			printf("%s",list[b-1]);
			break;
		case 6:
			b=(b+4)%7;
			f(&b);
			printf("%s",list[b-1]);
			break;
		case 7://ok
			b=(b+6)%7;
			f(&b);
			printf("%s",list[b-1]);
			break;
		case 8:
			b=(b+2)%7;
			f(&b);
			printf("%s",list[b-1]);
			break;
		case 9:
			b=(b+5)%7;
			f(&b);
			printf("%s",list[b-1]);
			break;
		case 10:
			b=b%7;
			f(&b);
			printf("%s",list[b-1]);
			break;
		case 11:
			b=(b+3)%7;
			f(&b);
			printf("%s",list[b-1]);
			break;
		case 12:
			b=(b+5)%7;
			f(&b);
			printf("%s",list[b-1]);
			break;
		default:
			break;
			
	}
			
	
}
