def dfs(v):
    global n

    visit[v]=1
    for i in range(1,n+1):
        if(visit[i]==0 and array[v][i]==1):
            dfs(i)




n,m=map(int,input().split())
array=list([0]*(n+1)for i in range(n+1))
visit=[0]*(n+1)
for i in range(m):
    a,b=map(int,input().split())
    array[a][b]=1
    array[b][a]=1

answer=0
#i는 시작 정점
for i in range(1,n+1):
    if(visit[i]==0):
        answer+=1
        dfs(i)
        
print(answer)
