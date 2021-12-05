#include<stdio.h>
int main(){
	int n,count=0,i,j;
	scanf("%d",&n);
	int n2=n,z=10;
	int number[7]={0,};
	while(n2!=0){
		n2=n2/z;
		count++;
	}
	for(i=n-(9*count);i<=n;i++){
		n2=i;
		int sum=0;
		int count2=0;
		while(n2!=0){
			number[count2]=n2%z;
			n2=n2/z;
			count2++;
		}
		for(j=0;j<count;j++){
			sum=sum+number[j];
		}
		for(j=0;j<7;j++){
			number[j]=0;
		}
		if(sum+i==n){
			printf("%d",i);
			return 0;
		}
	}
	printf("%d",0);
	return 0;
}
