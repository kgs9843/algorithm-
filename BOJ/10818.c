#include <stdio.h>

int main()
{
  int n;
	scanf("%d",&n);
	int a[1000000];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int max=a[0],min=a[0];
	for(int j=0;j<n;j++){
		if(max<a[j])max=a[j];
		if(min>a[j])min=a[j];
	}
	printf("%d %d",min,max);
}
