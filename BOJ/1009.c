#include <stdio.h>
int main(){
	int a,b,c,d,f;
	int i,j;
	scanf("%d",&a);
	for (i=0;i<a;i++){
		scanf("%d %d",&b,&c);
		d=b;
		if (c==1){
			if(b%10==0){
				b=10;
			}
			if (b>10){
				b=b%10;
			}
			
		}
		else{
			for(j=1;j<c;j++){
				if (b%10==0){
					b=10;
					break;
				}
			b=b*d;
			if (b>10){
				b=b%10;
			}
		}		
		}
	
		printf("%d\n",b);
	}
}
