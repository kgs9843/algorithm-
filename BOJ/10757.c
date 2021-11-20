#include <stdio.h>
int main()
{
	char big[2][10002];
	int i,big1=0,big2=0;
	char answer[10004];
	for(i=0;i<2;i++){
		scanf("%s",big[i]);
	}
	while(big[0][big1]!=NULL)big1++;
	while(big[1][big2]!=NULL)big2++;
	
	int compar;
	if(big1>big2){
		compar=big1-big2;
		for(i=compar;i<big1;i++){
			big[1][i]=big[1][i-compar];
		}
		for(i=0;i<compar;i++){
			big[1][i]='0';
		}
		big2=big1;
	}
	else{
		compar=big2-big1;
		for(i=compar;i<big2;i++){
			big[0][i]=big[0][i-compar];
		}
		for(i=0;i<compar;i++){
			big[0][i]='0';
		}
		big1=big2;
	}
	answer[0]='0';//                ok 
	int atoi1,atoi2,a1,a2;
	for(i=1;i<big1+2;i++){
		
		else{
			answer[i]=sum+48;
		}
		if(i==1&&answer[i-1]=='0')continue;
		printf("%c",answer[i-1]);
	}
	//printf("%s %s",big[0],big[1]);

	
	return 0;
}
