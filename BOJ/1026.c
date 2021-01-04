#include<stdio.h>
int main()
{	
	int n;
	int i,j;
    scanf("%d",&n);
    int a[n];
	int b[n];
	int c[n];
	int d[n];
	int a1[n];
	int b2[n];
    for(i=0;i<n;i++){
    	scanf("%d",&a[i]);
	}
	
	int m1;
	int m2;
	int c1=0;
	int c2=0;
	for(i=0;i<n;i++){
    	scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++){
		a1[i]=a[i];
		b2[i]=b[i];
	}
	
	
	
	
	for(i=0;i<n;i++){
		m1=0;
		m2=100;
		for(j=0;j<n;j++){
			if(b[j]!=-1){
    			if(m1<=b[j]){
    				m1=b[j];
    				c1=j;
    			}
			}
			if(a[j]!=-1){
				if(m2>=a[j]){
					m2=a[j];
					c2=j;
				}
			}
		}
		b[c1]=-1;
		c[i]=c1;
		a[c2]=-1;
		d[i]=c2;
	}
	for(i=0;i<n;i++){
		a[c[i]]=a1[d[i]];
	}
	int ff=0;
	for(i=0;i<n;i++){
		ff=ff+(a[i]*b2[i]);
	}
	/*
	printf("\n");
	for(i=0;i<n;i++){
		printf("%d ",a1[i]);
	}
	printf("\n");
	for(i=0;i<n;i++){
		printf("%d ",d[i]);
	}
	printf("\n");
	for(i=0;i<n;i++){
		printf("%d ",b2[i]);
	}
	printf("\n");
	for(i=0;i<n;i++){
		printf("%d ",c[i]);
	}
	printf("\n");*/
	printf("%d",ff);
}
