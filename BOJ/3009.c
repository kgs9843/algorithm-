#include <stdio.h>
int main(){
	int a[3][3]={0,};
	int i,j,count,x,y;
	for(i=0;i<3;i++){
		scanf("%d %d",&a[i][0],&a[i][1]);
	}
	for(i=0;i<3;i++){
		count=0;
		for(j=0;j<3;j++){
			if(j==i)continue;
			if(a[i][0]==a[j][0]){
				count++;
			}
		}
		if(count==0){
			break;
		}
	}
	x=a[i][0];
	for(i=0;i<3;i++){
		count=0;
		for(j=0;j<3;j++){
			if(j==i)continue;
			if(a[i][1]==a[j][1]){
				count++;
			}
		}
		if(count==0){
			break;
		}
	}
	y=a[i][1];
	printf("%d %d",x,y);
	
	return 0;
}
