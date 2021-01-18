#include<stdio.h>
int main(){
	unsigned long long int N;
	unsigned long long int i,j;
	scanf("%llu",&N);
	unsigned long long int a=10;
	unsigned long long int c;
	while(N/a!=0){
		a=a*10;
	}
	//printf("%d",a);//1000
	for(i=0;i<=9;i++){
		c=0;
		for(j=10;j<=a;j=j*10){
			c=c+(N/j)*(j/10);//최소 등장 보장 
			if((N%j)/(j/10)>=(i*(j/10))/(j/10)){//그 자리에 있는 숫자 
				if((N%j)/(j/10)>(i*(j/10))/(j/10)){
					if(i!=0){
						c=c+(j/10);
					}
				}
				else{
					if(j==10){
						if(i!=0){
							c=c+1;
						}
					}
					else{
						if(i==0){
							c=c+(N%j)-(j/10)+1;
						}
						else{
							c=c+(N%j)-(i*(j/10))+1;
						}
					}
				}
			}	
		}
		printf("%llu ",c);
	}	
}
