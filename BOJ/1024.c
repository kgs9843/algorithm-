#include<stdio.h>
int main(){
	int N,L,c,d,ss=0,aa;
	int i,j,k;
	scanf("%d %d",&N,&L);
	int t1=1,t2=2;;
	for(i=2;i<=100;i++){
		if(t1==N&&i==L){
			for(j=0;j<i;j++){
				printf("%d ",j);
			}
			t2=0;
			break;
		}
		t1=t1+i;
	}
	if(t2==0){
		return 0;
	}
	while(1){
		//printf("%d ",L);
		if(L>100){
			printf("-1");
			break;
		}
		c=0;
		for(i=1;i<=L;i++){
			c=c+i;
		}
		d=N-c;
		if(d>=0&&d%L==0){
			//int s=(N/L)+(N%L);
			//aa=(N/L)/L;
			for(i=1;i<=N;i++){
				int z=0;
				for(j=i;j<=i+L-1;j++){
					z=z+j;
				}
				if(z==N){
					for(k=i;k<=i+L-1;k++){
						printf("%d ",k);
					}
					break;
				}
			} 
			break;
		}
		else{
			L=L+1;
		}
	}
}	

	
