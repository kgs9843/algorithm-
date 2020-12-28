#include<stdio.h>
#include<string.h>
int i,j,k;
int f1(int l1[],int l2[],int c,int d){
	int a1;
	for(i=0;i<=c;i++){
		if(l1[i]==l2[d]){
			a1=i;
		}
	}
	for(i=0;i<=c;i++){
		if(a1+i>c){//c=9
			int z=(a1+i)-c;
			l1[i]=z;
		}
		else{
			l1[i]=l1[a1+i];
		}
	}
	return a1;
}

int f2(int l1[],int l2[],int c,int d){
	int a1;
	for(i=c;i>=0;i--){
		if(l1[i]==l2[d]){
			a1=(c-i)+1;//a1=1
		}
	}
	for(i=c;i>=0;i--){
		if(i-a1<0){//
			int z=(i-a1)+c+2;
			l1[i]=z;
		}
		else{
			l1[i]=l1[i-a1];
		}
	}
	return a1;
}

int main(void){
	int N,M;
	scanf("%d %d",&N,&M);
	int l1[N];
	int l2[M];
	for(i=0;i<M;i++){
		scanf("%d",&l2[i]);
	}
	for(i=0;i<N;i++){
		l1[i]=i+1;
	}
	int c=N-1;
	int s1,s2;
	int a1,a2;
	int f=0;
	for(i=0;i<M;i++){//1대신 M 
		if(l2[i]==l1[0]){
			for(k=0;k<c;k++){ 
				l1[k]=l1[k+1];
			}
			l1[c]=NULL;
			c=c-1;	
		}
		else{
			for(j=0;j<=c;j++){
				if(l1[j]==l2[i]){
					a1=j;
				}
			}		
			a2=(c+1)-a1;
			//printf("%d %d\n",a1,a2);
			if(a1<a2){
				f=f+a1;
			}
			else{
				f=f+a2;
			}
			int z=0;
			int ss[a1];
			for(j=0;j<=c;j++){
				if(j<a1){
					ss[j]=l1[j];
				}
				else{
					l1[z]=l1[j];
					z=z+1;
				}
			}
			for(j=0;j<a1;j++){
				l1[z+j]=ss[j];
			}
			
			for(k=0;k<c;k++){ 
				l1[k]=l1[k+1];
			}
			l1[c]=NULL;
			c=c-1;		
		}/*
		for(k=0;k<=c;k++){
			printf("%d ",l1[k]);
		}
		printf("\n");*/	
	}
	printf("%d",f);
	
}
