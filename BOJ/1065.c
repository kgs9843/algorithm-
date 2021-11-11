#include <stdio.h>
int hansu(int n){
	int a=10,c;
	int b[4];
	int j=n;
	int count=0;
	if(n<100)return -1;
	while(j/a!=0){
		c=j%a;
		j=j/a;
		b[count]=c;
		count++;
	}
	b[count]=j;
	int dif=b[count]-b[count-1];
	int answer=-1;
	for(int i=count;i>=1;i--){
		if(b[i]-b[i-1]!=dif)answer=0;
	}
	if(answer==-1){
		return -1;
	}
	else{
		return 0;
	}
}
int main()
{
	int n,count=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if (hansu(i)==-1){
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
