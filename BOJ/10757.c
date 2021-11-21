#include <stdio.h>
int main()
{
	char big[2][10002];
	int i,big1=0,big2=0;
	for(i=0;i<2;i++){
		scanf("%s",big[i]);
	}
	while(big[0][big1]!=NULL)big1++;
	while(big[1][big2]!=NULL)big2++;
	
	int compar;
	if(big1>big2){
		compar=big1-big2;
		for(i=big2-1;i>=0;i--){
			big[1][i+compar+1]=big[1][i];
		}
		for(i=0;i<=compar;i++){
			big[1][i]='0';
		}
		for(i=big1-1;i>=0;i--){
			big[0][i+1]=big[0][i];
		}
		big[0][0]='0';
		big2=big1;
	}
	else{
		compar=big2-big1;
		for(i=big1-1;i>=0;i--){
			big[0][i+compar+1]=big[0][i];
		}
		for(i=0;i<=compar;i++){
			big[0][i]='0';
		}
		for(i=big2-1;i>=0;i--){
			big[1][i+1]=big[1][i];
		}
		big[1][0]='0';
		big1=big2;
	}
	big1++;
	int c1,c2,sum,a1=0,a2;
	char mc;
	char answer[10004];
	for(i=big1-1;i>=0;i--){
		c1=big[0][i]-48;
		c2=big[1][i]-48;
		sum=c1+c2+a1;
		a1=0;
		if(sum>=10){
			a1=sum/10;
			a2=sum%10;
			sum=a2;
		}
		mc=sum+48;
		answer[i]=mc;
	}
	
	//printf("%s %s\n",big[0],big[1]);
	//printf("%d",big1);
	if(answer[0]=='0'){
		for(i=1;i<big1;i++){
			printf("%c",answer[i]);
		}
	}
	else{
		for(i=0;i<big1;i++){
			printf("%c",answer[i]);
		}
	}
	
	
	return 0;
}
