#include<stdio.h>
int main(){
	char a[5][6]={".#..#","#####","..#.#",".##.#","#..##"};
	int i,j;
	for(i=0;i<=4;i++){
		printf("%s\n",a[i]);
	}
}
