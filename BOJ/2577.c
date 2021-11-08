#include <stdio.h>


int main()
{	
	int c[100];
	int c2[10]={0,};
	int x=1;
	int a;
	for(int i=0;i<3;i++){
		scanf("%d",&a);
		x=x*a;
	}
	//printf("%d",x);
	int share=1,count=0;
	int bb=x;
	while(x/share!=0){
		c[count]=bb%10;
		bb=bb/10;
		share=share*10;
		count=count+1;
	}
	for(int j=0;j<=9;j++){
		int final=0;
		for(int k=0;k<count;k++){
			if(j==c[k]){
				final++;
			}
		}
		c2[j]=final;
		printf("%d\n",c2[j]);
	}	
}
