#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int de[n];
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&de[i]);
	}
	int com;
	int answer=0;
	for(i=0;i<n;i++){
		if(de[i]<2){
			continue;
		}
		//printf("%d",de[i]);
		com=1;
		for(j=2;j<de[i];j++){
			if(de[i]%j==0){
				com=0;
				break;
			}
		}
		if(com==1){
			answer++;
		}
	}
	printf("%d",answer);
	
	return 0;
}
