#include <stdio.h>

int main()
{
	int c;
	scanf("%d",&c);
	int i,j;
	float sn;//stduent number
	float score[1000]={0,};
	for(i=0;i<c;i++){
		float sum=0;
		float brain=0;
		float answer=0;
		scanf("%f",&sn);
		for(j=0;j<sn;j++){
			scanf("%f",&score[j]);
			sum=sum+score[j];
		}
		sum=sum/sn;
		for(j=0;j<sn;j++){
			if(score[j]>sum){
				brain=brain+1;
			}
		}
		answer=(brain*100)/sn;
		printf("%.3f%\n",answer);
		
	}
	return 0;
}
