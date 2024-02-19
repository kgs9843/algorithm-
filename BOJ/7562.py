def check(x,y):
    global n
    if(x>=0 and x<n and y>=0 and y<n and visit[y][x]==0):
        return True
    return False



def bfs():
    global top
    while(top<len(queue)):
        x=queue[top][0]
        y=queue[top][1]
        top+=1
        #나이트 이동
        if(check(x-2,y+1)):
            visit[y+1][x-2]=1
            ans[y+1][x-2]=ans[y][x]+1
            queue.append([x-2,y+1])
        if(check(x-1,y+2)):
            visit[y+2][x-1]=1
            ans[y+2][x-1]=ans[y][x]+1
            queue.append([x-1,y+2])

        if(check(x+1,y+2)):
            visit[y+2][x+1]=1
            ans[y+2][x+1]=ans[y][x]+1
            queue.append([x+1,y+2])
        if(check(x+2,y+1)):
            visit[y+1][x+2]=1
            ans[y+1][x+2]=ans[y][x]+1
            queue.append([x+2,y+1])

        if(check(x-2,y-1)):
            visit[y-1][x-2]=1
            ans[y-1][x-2]=ans[y][x]+1
            queue.append([x-2,y-1])
        if(check(x-1,y-2)):
            visit[y-2][x-1]=1
            ans[y-2][x-1]=ans[y][x]+1
            queue.append([x-1,y-2])

        if(check(x+1,y-2)):
            visit[y-2][x+1]=1
            ans[y-2][x+1]=ans[y][x]+1
            queue.append([x+1,y-2])
        if(check(x+2,y-1)):
            visit[y-1][x+2]=1
            ans[y-1][x+2]=ans[y][x]+1
            queue.append([x+2,y-1])



k=int(input())

for i in range(k):
    n=int(input())
    ans=[[0]*n for i in range(n)]
    visit=[[0]*n for i in range(n)]
    px,py=map(int,input().split())
    fx,fy=map(int,input().split())
    queue=[]
    top=0

    visit[py][px]=1
    queue.append([px,py])
    bfs()

    print(ans[fy][fx])
