n,m=map(int,input().split())
array=[[0]* m for _ in range(n)]
s=0
for i in range(n):
    a=input()
    for i in range(len(a)):
        array[s][i]=a[i]
    s+=1
  
answer=0
#o는 가로로 0 x는 세로로 1
for i in range(0,1<<n*m):

    #방문정보
    visit=[[0]* m for _ in range(n)]


    visit_ox=[0]*n*m
    for j in range(n*m):
        if(1<<j&i):visit_ox[j]=1

    #2차원배열에 넣어줌    
    aa=0    
    ox_array=[[0]* m for _ in range(n)]
    for j in range(n*m):
        if(j!=0 and j%m==0):
            aa+=1
        ox_array[aa][j%m]=visit_ox[j]
    #print(ox_array)


    sum=0
    for j in range(n):
        for k in range(m):
            st=''
            b_j=j
            b_k=k
            #가로
            if(ox_array[j][k]==0 and visit[j][k]==0):
                while(k<m and ox_array[j][k]==0):
                    st=st+str(array[j][k])
                    visit[j][k]=1
                    k+=1
                sum=sum+int(st)
                j=b_j
                k=b_k
                #print(sum)
            #세로
            elif(ox_array[j][k]==1 and visit[j][k]==0):
                while(j<n and ox_array[j][k]==1):
                    st=st+str(array[j][k])
                    visit[j][k]=1
                    j+=1
                sum=sum+int(st)
                #print(st)
                #j랑k값 되돌리기
                j=b_j
                k=b_k
    #print(sum)
    if(answer<sum):
        answer=sum
print(answer)

