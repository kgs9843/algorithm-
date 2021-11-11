#include <stdio.h>
void selfnumber(int *sn){
	int i,j,a,cal,k,answer;
	for(i=0;i<10000;i++){
		sn[i]=i+1;
		//printf("%d\n",sn[i]);
	}
	for(i=0;i<10000;i++){
		if(sn[i]==-1)continue;
		j=sn[i];
		while(j<=10000){
			answer=0;
			a=10;
			cal=j;
			while(cal/a!=0){
				k=cal%a;
				cal=cal/a;
				answer=k+answer;
			}
			j=j+answer+cal;
			sn[j-1]=-1;
		}
	}
	for(i=0;i<10000;i++){
		if(sn[i]==-1)continue;
		printf("%d\n",sn[i]);
	}
	
}

int main(void)
{
	int sn[100000];
	selfnumber(sn);
	return 0;
}
