mina=10000000
def dfs(b,n,checkArray,array,sum):
    global mina
    checkArray[n]=1
    sum1=0
    sum2=0
    for i in range(b):
        for j in range(b):
            if(checkArray[i]==1 and checkArray[j]==1):
                sum1+=array[i][j]
            elif(checkArray[i]==0 and checkArray[j]==0):
                sum2+=array[i][j]
    #print(checkArray)
    mina=min(mina,abs(sum1-sum2))
    if(sum==b-1):
        return
    else:
        sum+=1
        for i in range(n+1,b):
            if(checkArray[i]==0):
                dfs(b,i,checkArray,array,sum)
                checkArray[i]=0


a=int(input())
array=[list(map(int,input().split()))for i in range(a)]
checkArray=[0]*a
dfs(a,0,checkArray,array,1)
print(mina)
