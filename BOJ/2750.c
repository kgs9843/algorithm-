my solve

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










bubble sort

#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i,j;
	int a;
	int sort[1000];
	for(i=0;i<n;i++){
		scanf("%d",&sort[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if(sort[j]>sort[j+1]){
				a=sort[j];
				sort[j]=sort[j+1];
				sort[j+1]=a;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d\n",sort[i]);
	}
	return 0;
}
