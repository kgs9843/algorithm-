#include <stdio.h>
int main(){
	int cn[100]={0,};
	int n,m;
	int i,j,k;
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++){
		scanf("%d",&cn[i]);
	}
	int max=0,min=300000;
	for(i=0;i<m-2;i++){
		for(j=i+1;j<m-1;j++){
			for(k=j+1;k<m;k++){
				if(cn[i]+cn[j]+cn[k]==n){
					printf("%d",n);
					return 0;
				}
				else if(cn[i]+cn[j]+cn[k]<n){
					if(max<cn[i]+cn[j]+cn[k]){
						max=cn[i]+cn[j]+cn[k];
					}
				}
			}
		}
	}
	printf("%d",max);
	return 0;
}
