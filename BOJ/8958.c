#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	char quiz[81]={0};
	int i,j,k,l;
	for(i=0;i<n;i++){
		int answer=0;
		int count=0;
		int aa;
		scanf("%s",quiz);
		while(quiz[count]!='\0')count++;
		//printf("%d",count);                       ok
		for(j=0;j<count;j++){
			if(quiz[j]=='O'){
				k=j;
				aa=0;
				while(quiz[k]=='O'){
					k++;
					aa++;
				}
				//printf("%d ",aa);
				for(l=1;l<=aa;l++){
					answer=answer+l;
				}
				j=k;
			}
		}
		printf("%d\n",answer);
	}
	return 0;
}
