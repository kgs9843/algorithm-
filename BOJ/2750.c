#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i,j,count;
	int sort[1000];
	int sort2[1000];
	for(i=0;i<n;i++){
		scanf("%d",&sort[i]);
	}
	for(i=0;i<n;i++){
		count=0;
		for(j=0;j<n;j++){
			if(i==j)continue;
			if(sort[i]>sort[j])count++;
		}
		sort2[count]=sort[i];
	}
	for(i=0;i<n;i++){
		printf("%d\n",sort2[i]);
	}
	return 0;
}
