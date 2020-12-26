#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
	int a,b,c;
	int i,j,k;
	scanf("%d",&a);
	for(i=0;i<a;i++){
		int m=3;
		char l1[200]="";
		char l2[200]="";
		int l3[200]={0};
		int l4[200]={0};
		scanf("%s",l1);
		if(strlen(l1)==1){
			printf("NO\n");
			continue;
		}
		
		if (l1[0]=='0'&&l1[1]=='1'){
			int n=strlen(l1);
			while(l1[0]=='0'&&l1[1]=='1'){
				for(j=2;j<n;j++){
					l2[j-2]=l1[j];
				}
				n=n-2;
				strcpy(l1,l2);
				l1[n]='\0';
				l2[0]='\0';
			}
			//printf("%s\n",l1);
			if(l1[0]=='\0'){
				printf("YES\n");
				continue;
			}
			else if(strlen(l1)==1){
				printf("NO\n");
				continue;
			}
		}
		
		c=0;
		for(j=0;j<strlen(l1)-2;j++){
			if(l1[j]=='1'&&l1[j+1]=='0'&&l1[j+2]=='1'){
				l3[c]=j;//끝(이하 부호) 
				l4[c+1]=j+3;//시작 
				c=c+1;
			}
		}
		l3[c]=strlen(l1)-1;
		/*
		for(j=0;j<200;j++){
			printf("%d ",l3[j]);
		}
		printf("\n");
		for(j=0;j<200;j++){
			printf("%d ",l4[j]);
		}
		*/
		
		for(j=0;j<200;j++){
			if(l1[0]=='1'&&l1[1]=='0'&&l1[2]=='1'){
				m=0;
				break;
			}
			else if(l4[j]>=l3[j]){
				if(l4[j]==l3[j]){
					if(j==0){
						m=0;
					}
					else if(l4[j]>0){
						m=0;
					}
				}
				continue;
			}
			else if(l3[j]-l4[j]<3){
				m=0;
				break;
			}
			for(k=l4[j];k<=l3[j];k++){
				if(k==l4[j]){
					if(l1[k]=='1'&&l1[k+1]=='0'&&l1[k+2]=='0'){
						m=1;
					}
					else{
						m=0;
					}
				}
				else if(k==l3[j]){
					if(l1[k]=='1'){
						m=1;
					}
					else{
						m=0;
					}
				}
				else{
					if(l1[k]=='1'){
						if(l1[k+1]=='1'){
							m=1;
						}
						else if(l1[k-1]=='1'&&l1[k+1]=='0'&&l1[k+2]=='0'){
							m=1;
						}
						else{
							m=0;
						}
					}
				}
				
				if(m==0){
					break;
				}
			}
			if(m==0){
				break;
			}
		}
		if(m==1){
			printf("YES\n");
		}	
		else if(m==0){
			printf("NO\n");
		}	
	}
}
