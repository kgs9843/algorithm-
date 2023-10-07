N,M = map(int,input().split())
array=[list(map(int,input().split())) for _ in range(N)]

max=0
sum=0

for i in range(0,N):
    for j in range(0,M):
        
        
          #일자 테르로미노
        sum=0
        #가로로 길게 돼있는 경우
        if(j+3<M):
            for k in range(j,j+4):
                sum=sum+array[i][k]
        if(max<sum):
            max=sum
        
        sum=0
        #세로로 길게 돼있는 경우
        if(i+3<N):
            for k in range(i,i+4):
                sum=sum+array[k][j]
        if(max<sum):
            max=sum




            #정사각형 테르로미노
        sum=0
        if(j+1<M and i+1<N):
            for k in range(i,i+2):
                for l in range(j,j+2):
                    sum=sum+array[k][l]
        if(max<sum):
            max=sum
            



            #가로3 세로 2 인 'ㄱ'모양 테르로미노
        sum=0
        if(j+2<M and i+1<N):
            for l in range(j,j+3):
                sum=sum+array[i][l]
            sum=sum+array[i+1][l]
        if(max<sum):
            max=sum


            #ㄱ 좌우대칭인 테르로미노
        sum=0
        if(j+2<M and i+1<N):
            for l in range(j,j+3):
                sum=sum+array[i][l]
            sum=sum+array[i+1][j]
        if(max<sum):
            max=sum     

            
            #가로 2 세로 3 인 'ㄱ' 모양 테르로미노
        sum=0
        if(j+1<M and i+2<N):
            sum=sum+array[i][j]
            for k in range(i,i+3):
                sum=sum+array[k][j+1]
        if(max<sum):
            max=sum


            # 전에 꺼 좌우 대칭 한 모양
        sum=0
        if(j+1<M and i+2<N):
            for l in range(i,i+3):
                sum=sum+array[l][j]
            sum=sum+array[i][j+1]
        if(max<sum):
            max=sum


            # ㄴ 모양
        sum=0
        if(j+2<M and i+1<N):
            sum=sum+array[i][j]
            for l in range(j,j+3):
                sum=sum+array[i+1][l]
        if(max<sum):
            max=sum
        
            # 위에꺼 대칭
        sum=0
        if(j+2<M and i+1<N):
            for l in range(j,j+3):
                sum=sum+array[i+1][l]
            sum=sum+array[i][l]
        if(max<sum):
            max=sum
        
            #세로 3 가로 2 ㄴ
        sum=0
        if(j+1<M and i+2<N):
            for l in range(i,i+3):
                sum=sum+array[l][j]
            sum=sum+array[l][j+1]
        if(max<sum):
            max=sum
           
           #대칭
        sum=0
        if(j+1<M and i+2<N):
            for l in range(i,i+3):
                sum=sum+array[l][j+1]
            sum=sum+array[l][j]
        if(max<sum):
            max=sum
        
          #초록색
        sum=0
        if(i+2<N and j+1<M):
            for l in range(i,i+2):
                sum=sum+array[l][j]
            for l in range(i+1,i+3):
                sum=sum+array[l][j+1]
            if(max<sum):
                max=sum
          #대칭
        sum=0
        if(i+2<N and j+1<M):
            for l in range(i,i+2):
                sum=sum+array[l][j+1]
            for l in range(i+1,i+3):
                sum=sum+array[l][j]
            if(max<sum):
                max=sum

         # 누워있는 초록색
        sum=0
        if(i+1<N and j+2<M):
            for l in range(j,j+2):
                sum=sum+array[i+1][l]
            for l in range(j+1,j+3):
                sum=sum+array[i][l]
            if(max<sum):
                max=sum 
         # 대칭
        sum=0
        if(i+1<N and j+2<M):
            for l in range(j,j+2):
                sum=sum+array[i][l]
            for l in range(j+1,j+3):
                sum=sum+array[i+1][l]
            if(max<sum):
                max=sum 
        
         # ㅜ
        sum=0
        if(i+1<N and j+2<M):
            for l in range(j,j+3):
                sum= sum + array[i][l]
                if(l==j+1):
                    sum=sum+array[i+1][l]
            if(max<sum):
                max=sum
        
         # ㅗ
        sum=0
        if(i+1<N and j+2<M):
            for l in range(j,j+3):
                sum= sum + array[i+1][l]
                if(l==j+1):
                    sum=sum+array[i][l]
            if(max<sum):
                max=sum
        # ㅏ
        sum=0
        if(i+2<N and j+1<M):
            for l in range(i,i+3):
                sum= sum + array[l][j]
                if(l == i+1):
                    sum=sum+array[l][j+1]
            if(max<sum):
                max=sum

        # ㅓ
        sum=0
        if(i+2<N and j+1<M):
            for l in range(i,i+3):
                sum= sum + array[l][j+1]
                if(l == i+1):
                    sum=sum+array[l][j]
            if(max<sum):
                max=sum

print(max)
