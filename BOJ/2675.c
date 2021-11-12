#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i,j,k,n2,count;
	for(i=0;i<n;i++){
		scanf("%d",&n2);
		char qr[21];
		scanf("%s",&qr);
		count=0;
		while(qr[count]!='\0')count++;
		for(j=0;j<count;j++){
			for(k=0;k<n2;k++){
				printf("%c",qr[j]);
			}
		}
		printf("\n");
	}
	
}
