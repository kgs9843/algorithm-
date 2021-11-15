#include<stdio.h>
int main(){
	char input[101];
	scanf("%s",input);
	int count=0;
	while(input[count]!=NULL)count++;
	int i,j;
	int answer=0;
	for(i=0;i<count;i++){
		if(input[i]=='d'){
			if(input[i+1]=='-'){
				i++;
			}
			else if(input[i+1]=='z'&&input[i+2]=='='){
				i=i+2;
			}
		}
		else if(input[i]=='s'){
			if(input[i+1]=='='){
				i++;
			}
		}
		else if(input[i]=='z'){
			if(input[i+1]=='='){
				i++;
			}
		}
		else if(input[i]=='c'){
			if(input[i+1]=='='||input[i+1]=='-'){
				i++;
			}
		}
		else if(input[i]=='n'||input[i]=='l'){
			if(input[i+1]=='j'){
				i++;
			}
		}
		//printf("%d ",i);
		answer++;
	}
	printf("%d",answer);
	return 0;
}
