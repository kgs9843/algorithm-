#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	char a[101]="";
	scanf("%s",&a);
	int count=0;
	for(int i=0;i<n;i++){
		count=a[i]-'0'+count;
	}
	printf("%d",count);
}
