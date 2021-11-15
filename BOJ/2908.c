#include<stdio.h>
#include<stdlib.h>
int main(){
	char n1[4];
	char n2[4];
	scanf("%s",n1);
	scanf("%s",n2);
	int i,j=0;
	char newn1[4];
	char newn2[4];
	for(i=2;i>=0;i--){
		newn1[j]=n1[i];
		newn2[j]=n2[i];
		j++;
	}
	newn1[3]='\0';
	newn2[3]='\0';
	//printf("%s %s",newn1,newn2);
	int in1,in2;
	in1=atoi(newn1);
	in2=atoi(newn2);
	if(in1>in2){
		printf("%d",in1);
	}
	else{
		printf("%d",in2);
	}
	return 0;
}
