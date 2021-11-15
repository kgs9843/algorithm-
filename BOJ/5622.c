#include<stdio.h>
int main(){
	char dial[8][5]={"ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
	int i,j,k;
	char input[16];
	scanf("%s",&input);
	int count=0;
	while(input[count]!=NULL)count++;
	int answer=0;
	for(i=0;i<count;i++){
		for(j=0;j<8;j++){
			for(k=0;k<5;k++){
				if(input[i]==dial[j][k]){
					//printf("%d ",j);
					answer=answer+j+3;
				}
			}
		}
	}
	printf("%d",answer);
	return 0;
}
