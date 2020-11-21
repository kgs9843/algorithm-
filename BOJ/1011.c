#include<stdio.h>
int main(){
	int a;
	int i,j,k;
	scanf("%d",&a);
	for (i=1;i<=a;i++){
		int b=0,c=0,d,e=0,x,y,r=0,h=0;
		scanf("%d %d",&x,&y);
		b=y-x;
		d=b;
		for(;;){
			if(h<d){//0,0,1,3
				d=b;
				e=e+1;//1,2,3
				c=c+e;//1,3,6
				d=d-c;
				h=c-e;
				r=r+1;//1	
			}
			else{
				break;
			}
		}// 늘어날 수 있는 최대거리  : h, 늘어난 걸 초과한 거리 : c, 초과한 거리에서의 거리차이 : d, 결과값: r
		h=b-(2*h);
		if (h<=0){
			r=(r-1)*2;
		}
		else{
			r=((r-1)*2)+1;//거리가 7인 경우 
		}
		if(b==0){
			printf("0\n");
		}
		else if(b==1){
			printf("1\n");
		} 
		else if(b==4){
			printf("3\n");
		}
		else{
			printf("%d\n",r);	
		}
		
	}
}
