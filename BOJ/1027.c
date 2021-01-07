#include<stdio.h>
int main(){
	int N,f,aa;
	float r,r1,r2,r3,a1;
	int i,j,k;
	scanf("%d",&N);
	int h[N];
	for(i=0;i<N;i++){
		scanf("%d",&h[i]);
	}
	
	int ff[N];
	if(N==1){
		printf("%d",0);
		return 0;
	}
	else if(N==2){
		printf("%d",1);
		return 0;
	}
	else if(N==3){
		printf("%d",2);
		return 0;
	}
	
	for(i=0;i<=N-1;i++){
		f=0;
		aa=0;
		if(i==0){
			f=1;
			r1=(h[1]-h[0]);//i==0
			for(j=2;j<=N-1;j++){
				r=(h[j]-h[i])/float(j-i);//기울기 
				if(r1>0){//양수
					if(r1<r){
						f=f+1;
						r1=r;
					}
				}
				else if(r1==0){
					if(r>0){
						if(r1<r){
							f=f+1;
							r1=r;
						}
					}
				} 
				else if(r1<0){
					if(r>0){
						aa=1;
						if(r1<r){
							f=f+1;
							r1=r;
						}
					}
					else if(aa==0&&r==0){
						f=f+1;
						aa=1;
					}
					else if(aa==0&&r<0){
						if(r1<r){
							f=f+1;
							r1=r;
						}
					}
					//printf("%d ",aa);
					//printf("%f ",r);
				}
			}
		}//ok
		
		
		
		
		else if(0<i<N-1){
			aa=0;
			f=2;
			if(i!=N-2){//우측 
				float rr=float(h[i+1]-h[i]);
				for(j=i+2;j<=N-1;j++){
					r=(h[j]-h[i])/float(j-i);//기울기
					if(rr>0){//양수
						if(rr<r){
							f=f+1;
							rr=r;
						}
					}
					else if(rr==0){
						if(r>0){
							if(rr<r){
								f=f+1;
								rr=r;
							}
						}
					} 
					else if(rr<0){
						if(r>0){
							aa=1;
							if(rr<r){
								f=f+1;
								rr=r;
							}
						}
						else if(aa==0&&r==0){
							f=f+1;
							aa=1;
						}
						else if(aa==0&&r<0){
							if(rr<r){
								f=f+1;
								rr=r;
							}
						}
					//printf("%d ",aa);
					//printf("%f ",r);
					}
					
				} 
			}
			if(i!=1){//좌측 
				aa=0;
				float rl=float(h[i]-h[i-1]);//5
				for(j=i-2;j>=0;j--){
					r=(h[i]-h[j])/float(i-j);//기울기
					if(rl<0){//음수
						if(rl>r){
							f=f+1;
							rl=r;
						}
					}
					else if(rl==0){
						if(r<0){
							if(rl>r){
								f=f+1;
								rl=r;
							}
						}
					} 
					else if(rl>0){
						if(r<0){
							aa=1;
							if(rl>r){
								f=f+1;
								rl=r;
							}
						}
						else if(aa==0&&r==0){
							f=f+1;
							aa=1;
						}
						else if(aa==0&&r>0){
							if(rl>r){
								f=f+1;
								rl=r;
							}
						}
						//printf("%d ",aa);
						//printf("%f ",r);
					}
				}
			}
		}
		
		if(i==N-1){
			r3=float(h[N-1]-h[N-2]);//i==N-1
			f=1;
			aa=0;
			for(j=N-3;j>=0;j--){
				r=(h[i]-h[j])/float(i-j);//기울기
				
				if(r3<0){//음수
					if(r3>r){//////
						f=f+1;
						r3=r;
					}
				}
				else if(r3==0){
					if(r<0){
						if(r3>r){
							f=f+1;
							r3=r;
						}
					}
				} 
				else if(r3>0){
					if(r<0){
						aa=1;
						if(r3>r){
							f=f+1;
							r3=r;
						}
					}
					else if(aa==0&&r==0){
						f=f+1;
						aa=1;
					}
					else if(aa==0&&r>0){
						if(r3>r){
							f=f+1;
							r3=r;
						}
					}
					//printf("%d ",aa);
					//printf("%d    ",f);
				}
			}//ok
		}
		ff[i]=f;
		//printf("%d ",f);
	}
	//printf("\n");
	int ce=0;
	for(i=0;i<N;i++){
		if(ce<=ff[i]){
			ce=ff[i];
		}
	}
	printf("%d",ce);
	return 0;
}
