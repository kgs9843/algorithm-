n,m=map(int,input().split())
visit=[0]*n #방문체크
list=list([] for i in range(n))
for i in range(m):
    i,j=map(int,input().split())
    list[i].append(j)
    list[j].append(i)
answer=0
print(list)
def dfs(i,sum):
    global answer
    global n
    if(sum==4):
        answer=1
        return
    visit[i]=1
    for j in list[i]:
        if(visit[j]==0):
            dfs(j,sum+1)
            visit[j]=0
    return 0



for i in range(n):
    dfs(i,0)
    visit[i]=0
    if(answer):break
print(answer)
