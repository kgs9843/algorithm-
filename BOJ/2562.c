#include <stdio.h>

int main()
{
  int a[9];
	for(int i=0;i<9;i++){
		scanf("%d",&a[i]);
	}
	int max=0;
	int c;
	for(int i=0;i<9;i++){
		if(max<a[i]){
			max=a[i];
			c=i;
		}
	}
	printf("%d\n%d",max,c+1);
}
