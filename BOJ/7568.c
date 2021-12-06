#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int weghit[50]={0,};
	int tall[50]={0,};
	int record[50][2]={0,};
	int answer[50]={0,};
	int i,j,k;
	for(i=0;i<n;i++){
		scanf("%d %d",&weghit[i],&tall[i]);
	}
	int count=1;
	for(j=0;j<n;j++){
		int max1=0,max2=0;
		for(i=0;i<n;i++){
			if(weghit[i]>max1){
				max1=weghit[i];
			}
			if(tall[i]>max2){
				max2=tall[i];
			}
		}
		for(i=0;i<n;i++){
			if(max1!=0){
				if(weghit[i]==max1){
					record[i][0]=count;
					weghit[i]=0;
				}
			}
			if(max2!=0){
				if(tall[i]==max2){
					record[i][1]=count;
					tall[i]=0;
				}
			}
		}
		count++;
	}
	for(i=0;i<n;i++){
		printf("%d %d\n",record[i][0],record[i][1]);
	}
	count=1;
	int add;
	for(i=0;i<n;i++){
		if(record[i][0]==count){
			if(record[i][1]==count){
				answer[i]=count;
				record[i][0]=0;
				record[i][1]=0;
				count++;
			}
			else{
				add=0;
				for(j=0;j<n;j++){
					if(record[j][1]==0){
						continue;
					}
					else if(record[j][1]<=record[i][1]){
						answer[j]=count;
						add++;
						record[j][0]=0;
						record[j][1]=0;
					}
				}
				count=count+add;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",answer[i]);
	}
	return 0;
}

