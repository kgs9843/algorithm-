def dfs(v):
    global n
    global ans
    visit[v]=1
    for i in range(1,n+1):
        if(visit[i]==0 and array[v][i]==1):
            ans=ans+" "+str(i)
            dfs(i)
            #visit[i]=0
    return    


def bfs():
    global n
    global top


    while(top<len(queue)):
        #디큐
        v=queue[top]   
        top+=1
        if(visit[v]==0):
            print(v,end=' ')
        visit[v]=1
        #print(queue)
        for i in range(1,n+1):
            if(visit[i]==0 and array[v][i]==1):
                #visit[i]=1
                queue.append(i)
    return




n,m,v=map(int,input().split())
array=[[0]*(n+1) for i in range(n+1)]
visit=[0]*(n+1)
for i in range(m):
    a,b=map(int,input().split())
    array[a][b]=1
    array[b][a]=1

ans=str(v)
dfs(v)
print(ans)


#처음 인접한 간선들을 넣어줌
top=0
queue=list()
queue.append(v)
#방문 초기화
visit=[0]*(n+1)
bfs()
