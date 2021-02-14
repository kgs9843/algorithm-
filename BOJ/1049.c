#include<stdio.h>

int main(){
	int N,M;
	scanf("%d %d",&N,&M);
	int a[M];
	int b[M];
	int i;
	int n=1;
	for(i=0;i<M;i++){
		scanf("%d %d",&a[i],&b[i]);
		if(a[i]==0||b[i]==0){
			n=0;	
		}
	}
	if(n==0){
		printf("%d",0);
		return 0;
	}
	
	int sk=N%6;//나머지 
	int ah=N/6;//몫 
	int ch=b[0]*sk;
	int ch2=b[0]*6;
	for(i=0;i<M;i++){
		if(ch>b[i]*sk){
			ch=b[i]*sk;
		}
	}
	for(i=0;i<M;i++){
		if(ch>a[i]){
			ch=a[i];
		}
	}
	if(ah==0){
		printf("%d",ch);
		return 0;
	}
	//printf("%d",ch);
	
	for(i=0;i<M;i++){
		if(ch2>b[i]*6){
			ch2=b[i]*6;
		}
	}
	for(i=0;i<M;i++){
		if(ch2>a[i]){
			ch2=a[i];
		}
	}
	ch2=ch2*ah;
	printf("%d",ch+ch2);	
}
