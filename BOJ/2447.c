#include <stdio.h>
char a[2500][2500]={NULL};
int n,c;
int i,j;
int star(n,c){
	if(n<3)return 0;
	for(i=0;i<c;i++){
		for(j=0;j<c;j++){
			if((i>=n/3||i<=(n/3)+(n/3)-1)&&(j>=n/3||j<=(n/3)+(n/3)-1)){
				a[i][j]=" ";
			}
			else{
				a[i][j]='*';
			}
		}
	}
	star(n/3);
}
int main(){
	scanf("%d",&n);
	c=n;
	int i;
	printf("%d",star(n,c));
}

27  1 4 7 10 13 16 19 22 25    4  13 
9   1 4 7 
3   1
