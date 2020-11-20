#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c,d,e,f,g,sr,bi,sm;
	double di,da;
	int i;
	scanf("%d",&a);
	for (i=0;i<a;i++){
		scanf("%d %d %d %d %d %d",&b,&c,&d,&e,&f,&g);
		di=sqrt(((e-b)*(e-b))+((f-c)*(f-c)));
		da=d+g;
		sr=sqrt((d-g)*(d-g));
		
		if(d>g){
			bi=d;
			sm=g;
		}
		else{
			bi=g;
			sm=d;
		}
		

		if (di==da){
			printf("1\n");
		}
		else if (di==0&&d==g){
			printf("-1\n");
		}
		else if(di>da){
			printf("0\n");
		}	
		else if (di<da){
			if(di>d&&di>g){
				printf("2\n");
			}
			else if (sr==di){
				printf("1\n");
			}
			else if(di+sm>bi){
				printf("2\n");
			}
			else{
				printf("0\n");
			}
			
		}
	}
}
