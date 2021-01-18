#include<stdio.h>
int main(){
	int N,i;
	scanf("%d",&N);
	int s[6];
	for(i=0;i<6;i++){
		scanf("%d",&s[i]);
	}
	
	if(N==1){
		int zn=0;
		int ssss=0;
		for(i=0;i<6;i++){
			if(zn<s[i]){
				zn=s[i];
			}
			ssss=ssss+s[i];
		}
		printf("%d",ssss-zn);
		return 0;
	}
	
	
	
	
	int u;//위 아래 면 중 작은 것  
	if(s[2]<s[3]){
		u=s[2];
	}
	else{
		u=s[3];
	}
	int c;
	c=s[5];
	s[5]=s[4];
	s[4]=c;//A B F E 로 순서를 맞춰 줌 
	int chl=s[0];
	for(i=0;i<6;i++){
		if(chl>=s[i]){
			chl=s[i];
		}
	} 
	//chl은 6면중에서 최솟값 
	int s1[4];
	int t1=0;
	for(i=0;i<6;i++){
		if(i==2||i==3){
			continue;
		}
		else{
			s1[t1]=s[i];
			t1=t1+1;
		}
	}
	int chl2=s1[0];
	for(i=0;i<4;i++){
		if(chl2>=s1[i]){
			chl2=s1[i];
		}
	}
	//chl2은 위 아래 제외하고 최솟값 
	int z=s1[3]+s[0];
	int zzz=s1[3]+s[0];
	for(i=0;i<3;i++){
		if(z>=s1[i]+s1[i+1]){
			z=s1[i]+s1[i+1];
		}
		if(zzz>=s1[i]+s1[i+1]){
			zzz=s1[i]+s1[i+1];
		}
	}
	//z는 위아랫면 말고 연속된 수들 중 가장 작은 값 
	
	
	if(zzz>u+chl2){
		zzz=u+chl2;
	}
	//printf("%d",zzz);
	//zzz는 두면중 최솟  값 
	 
	//printf("%d %d %d %d",u,chl,chl2,z);
	
	
	
	
	
	unsigned long long int in=N-2;//안에 있는 공간들
	in=(in*in*chl)+(in*(in+1)*chl*4);
	//printf("%d",in);
	
	unsigned long long int leg=zzz;//다리들 
	leg=leg*(N-1)*4;
	
	unsigned long long int rhr=u+z;//꼭짓점 들 
	rhr=rhr*4;
	//printf("%d",rhr);
	
	unsigned long long int sk=N-2;//나머지 
	sk=sk*(zzz)*4;
	
	unsigned long long int sss=sk+rhr+leg+in;
	printf("%llu",sss);
	
	
}
