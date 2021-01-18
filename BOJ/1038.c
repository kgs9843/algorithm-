#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
int f(int x,int y){//조합
	int a=x-y;
	if(a<=y){
		a=y;
	}
	int s=1;
	int ss=1;
	int i;
	for(i=1;i<=y;i++){
		s=s*i;
	}
	for(i=x-y+1;i<=x;i++){
		ss=ss*i;
	}
	int f=ss/s;
	return f;
}
void fff(int s[],int b,int i,int st);
bool g(int s[],int i);


int main(){
	int N,c;
	long long int a=1;
	int b=0;
	int d=0;
	scanf("%d",&N);
	int z=100; 
	if(N==1022){
		printf("9876543210");
		return 0;
	}
	else if(N>1022){
		printf("-1");
		return 0;
	}
	else if(N==0){
		printf("0");
		return 0;
	}
	while(a!=2000000000){//a는1부터 증가 
		if(a/10==0){
			b=b+1;//b는 나중에 N이랑 비교
			a=a+1; 
			z=10; 
		}
		else if(a/z==0){//z=100   최댓값 : 1022 
			c=a/(z/10);
			b=b+f(c,d);
			a=a+(z/10);
		}
		
		//printf("%d ",b);
		//printf("%d   ",a);
		if(b>=N){
			a=a-(z/10);
			b=b-f(c,d);
			b=N-b;
			//printf("%d ",b);
			//printf("  %lld",a);
			break;
		}
		if(a/z!=0){
			z=z*10;
			d=d+1;
		}
	}
	//printf("%d ",a);
	int cou=1;
	int ccc=a;
	while(ccc/10!=0){
		ccc=ccc/10;
		cou=cou+1;
	}
	//printf("%d ",cou);
	int st=cou;
	//printf("%d ",st);
	int s[10]={0,};
	z=z/10;
	s[0]=a/z;
	//printf("\n%d\n",a);
	st=st-1;//숫자가 배열 0부터 st까지 봐야함
	//printf("%d",b); 
	//printf(" %d",st);
	fff(s,b,0,st);//s는 배열, b는 백트래킹 돌려야 하는 개수 
	
}
int sss=0;
void fff(int s[],int b,int i,int st){
	int j;
	if(g(s,i)){
		if(i==st){
			sss=sss+1;
			if(sss==b){
				for(j=0;j<=st;j++){
					printf("%d",s[j]);
				}
			}	
		}
		else{
			for(j=0;j<s[0];j++){
				s[i+1]=j;
				fff(s,b,i+1,st);
			}
		}
	}
}
bool g(int s[],int i){
	int k=1;
	int j;
	bool b1=true;
	if(k<=i){
		for(j=0;j<i;j++){
			if(s[j]<=s[i]){
				b1=false;
			}
		}
	}
	return b1;
	
}
