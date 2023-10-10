def dfs(answer,length):
    global visit
    global M
    global array
    #종료조건
    if(length>=M):
        print(answer)
        return
    
    for i in array:
        if(visit[i]==0):
            next= answer + " "+ str(i)
            visit[i]=1
            dfs(next,length+1)
            visit[i]=0





N,M = map(int, input().split())
array=[i for i in range(1,N+1)]

visit=[0]*(N+1)
for i in range(1,N+1):
    visit[i]=1
    dfs(str(i),1)
    visit[i]=0




