import sys
sys.setrecursionlimit(50000)

n,m=map(int,input().split())

def check(i,j):
    global n,m
    if(i>=0 and i<n and j>=0 and j<m and array[i][j]=='1'):
        return True
    return False

def bfs():
    global top
    while(len(queue)>top):
        #print(queue)
        #print(top)
        i=queue[top][0]
        j=queue[top][1]
        top+=1
        #print(i,j)
        if(check(i-1,j) and visit[i-1][j]==0):
            queue.append([i-1,j])
            visit[i-1][j]=1
            ans[i-1][j]=ans[i][j]+1
        if(check(i+1,j) and visit[i+1][j]==0):
            queue.append([i+1,j])
            visit[i+1][j]=1
            ans[i+1][j]=ans[i][j]+1
        if(check(i,j-1) and visit[i][j-1]==0):
            queue.append([i,j-1])
            visit[i][j-1]=1
            ans[i][j-1]=ans[i][j]+1
        if(check(i,j+1) and visit[i][j+1]==0):
            queue.append([i,j+1])
            visit[i][j+1]=1
            ans[i][j+1]=ans[i][j]+1
    return 
    





array=[input() for i in range(n)]
queue=[]
ans=[[0]*m for i in range(n)]
visit=[[0]*m for i in range(n)]
queue.append([0,0])
top=0
visit[0][0]=1
bfs()
#print(ans)
print(ans[n-1][m-1]+1)
