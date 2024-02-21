import sys

def check(x,y):
    global n,m
    if(x>=0 and x<n and y>=0 and y<m):
        return True
    return False

def dfs(a,b,cnt):
    global start_x,start_y,ans
    
    visit[a][b]=1
    #print(visit)
    if(ans==True):
        return

    for i in range(4):
        nx=a+xy[i][0]
        ny=b+xy[i][1]
        if(check(nx,ny)==False):
            continue
        if(cnt>=4 and nx==start_x and ny==start_y):
            ans=True
            return
        #시작 컬러가 같고 방문 안했다면
        if(array[nx][ny]==array[start_x][start_y] and visit[nx][ny]==0):
            dfs(nx,ny,cnt+1)
            visit[nx][ny]=0



n,m=map(int,input().split())
array=list(input() for i in range(n))
#print(array)
visit=list([0]*m for i in range(n))
#동서남북
xy=[[0,1],[0,-1],[1,0],[-1,0]]

for i in range(n):
    for j in range(m):
        ans=False
        start_x=i
        start_y=j

        dfs(i,j,1)
        visit[i][j]=0

        if(ans==True):
            print("Yes")
            sys.exit()
print("No")
