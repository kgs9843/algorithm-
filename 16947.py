import sys
sys.setrecursionlimit(10**6)

c=0
def dfs(n,start,cnt):
    global c
    visit[n]=1
    if(n==start and cnt>=3):
        check[n]=1
        c=1
        return
    for i in array[n]:
        if(visit[i]==0 or i==start and cnt>=2):
            dfs(i,start,cnt+1)
            if(c==1):
                check[i]=1
                return
    return


queue=[]
def bfs(n):
    top=0
    for i in range(1,n+1): #순환역을 모두 queue에 append 
        if check[i]==1:
            result[i] = 0
            queue.append(i)
    #print(queue)
    while top<len(queue):
        v = queue[top]
        top+=1
        
        for i in array[v]:
            if result[i] ==-1:
                queue.append(i)
                result[i] = result[v] + 1
                
    return


n=int(input())
array=list([] for i in range(n+1))
visit=[0]*(n+1)
check=[0]*(n+1)
result=[-1]*(n+1)


for i in range(n):
    a,b=map(int,input().split())
    array[a].append(b)
    array[b].append(a)
for i in range(1,n+1):
    dfs(i,i,0)
    visit=[0]*(n+1)
    if(c==1):
        break

#print(check)
bfs(n)

for i in result[1:]:
    print(i,end=' ')

