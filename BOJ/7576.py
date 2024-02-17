import sys
sys.setrecursionlimit(50000)

def check(x,y):
    global n,m
    if(x>=0 and x<m and y>=0 and y<n and array[x][y]!=-1 and array[x][y]==0):
        return True
    return False


def bfs():
    global start,last,ans
    global n,m
    num=last

    


    while(start<last):
        if(start==num):
            ans+=1
            num=last
        
        # for i in range(m):
        #     for j in range(n):
        #         print(array[i][j],end=' ')
        #     print()
        # print()

        x=queue[start][0]
        y=queue[start][1]
        start+=1
        
        #print(num)

        
        #상하좌우
        if(check(x-1,y)):
            queue.append([x-1,y])
            array[x-1][y]=1
            last+=1
        if(check(x+1,y)):
            queue.append([x+1,y])
            array[x+1][y]=1
            last+=1
        if(check(x,y-1)):
            queue.append([x,y-1])
            array[x][y-1]=1
            last+=1
        if(check(x,y+1)):
            queue.append([x,y+1])
            array[x][y+1]=1
            last+=1    
    



n,m=map(int,input().split())

queue=list()
start=0
last=0


array=list(list(map(int,input().split())) for i in range(m))
#visit=[[0]*n for i in range(m)]
#익은 토마토의 위치 저장
for i in range(m):
    for j in range(n):
        if(array[i][j]==1):
            queue.append([i,j])
            last+=1

ans=0
bfs()
c=True
for i in range(m):
    for j in range(n):
        if(array[i][j]==0):
            c=False
            break
if(c):
    print(ans)
else:
    print(-1)
