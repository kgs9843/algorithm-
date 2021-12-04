#include <stdio.h>
char a[2500][2500]={NULL};
int n,c,z1,z2;
int i,j,k;
int star(n,c){
	if(n<3)return 0;
	else if(n==c){
		for(i=0;i<c;i++){
			for(j=0;j<c;j++){
				if((i>=n/3&&i<=(n/3)+(n/3)-1)&&(j>=n/3&&j<=(n/3)+(n/3)-1)){
					a[i][j]=' ';
				}
				else{
					a[i][j]='*';
				}
			}
		}
		star(n/3,c);
	}
	else{
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if((i>=n/3&&i<=(n/3)+(n/3)-1)&&(j>=n/3&&j<=(n/3)+(n/3)-1)){
					z1=i;
					z2=j;
					while(i<c){
						while(j<c){
							a[i][j]=' ';
							j=j+n;
						}
						j=z2;
						i=i+n;
					}
					i=z1;
				}
			}
		}
		star(n/3,c);
	}
}
int main(){
	scanf("%d",&n);
	c=n;
	star(n,c);
	
	for(i=0;i<c;i++){
		for(j=0;j<c;j++){
			printf("%c",a[i][j]);
		}
		printf("\n");
	}
}
