#include<stdio.h>
#include<string.h>
int main(void){
	int x,y;
	int i,j,k,l;
	scanf("%d %d",&y,&x);
	char b1[8][9];
	char b2[8][9];
	for(i=0;i<8;i++){
		if(i%2==0){
			for(j=0;j<8;j++){
				if(j%2==0){
					b1[i][j]='B';
					b2[i][j]='W';
				}
				else{
					b1[i][j]='W';
					b2[i][j]='B';
				}	
			}
		}
		else{
			for(j=0;j<8;j++){
				if(j%2==0){
					b1[i][j]='W';
					b2[i][j]='B';
				}
				else{
					b1[i][j]='B';
					b2[i][j]='W';
				}	
			}
		}
		b1[i][8]='\0';
		b2[i][8]='\0';	
	}
	char t1[y][x+1];
	for(i=0;i<y;i++){
		scanf("%s",t1[i]);
	}
	int c1=0;
	int c2=0;
	int c3=2500;
	
	
	for(i=0;i<y-7;i++){
		for(j=0;j<x-7;j++){
			int j1=0;
			int j2=0;
			for(k=i;k<i+8;k++){
				for(l=j;l<j+8;l++){
					if(b1[j1][j2]!=t1[k][l]){
						c1=c1+1;
					}
					if(b2[j1][j2]!=t1[k][l]){
						c2=c2+1;
					}
					j2=j2+1;
					//printf("%c",t1[k][l]);
				}
				j2=0;
				j1=j1+1;
				//printf("\n");
			}
			if(c3>c2){
				c3=c2;
			}
			if(c3>c1){
				c3=c1;
			}
			//printf("\n%d %d\n",c1,c2);
			c1=0;
			c2=0;
		}
	}
	printf("%d",c3);
	
}
