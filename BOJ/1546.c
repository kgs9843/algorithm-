#include <stdio.h>


int main()
{	
	int n;
	scanf("%d",&n);
	int i,j;
	float score[n];
	for(i=0;i<n;i++){
		scanf("%f", &score[i]);
	}
	float max=0;
	for(i=0;i<n;i++){
		if(max<score[i])max=score[i];
	}
	//printf("%f",max);
	float answer=0.0;
	for(i=0;i<n;i++){
		score[i]=(score[i]*100)/max;
		answer=answer+score[i];
	}
	printf("%f",answer/n);
	
	
}
