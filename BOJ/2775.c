#include <stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	int i,j,k;
	int ho;
	int floor;
	for(i=0;i<t;i++){
		scanf("%d",&floor);
		scanf("%d",&ho);
		int apart[ho];
		for(j=0;j<ho;j++){
			apart[j]=j+1;
		}
		for(j=0;j<floor;j++){
			for(k=1;k<ho;k++){
				apart[k]=apart[k]+apart[k-1];
			}
		}
		printf("%d\n",apart[ho-1]);
	}

	return 0;
}
