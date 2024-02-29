import sys


def check(i,j):
    global n
    if(i>=0 and i<n and j>=0 and j<n and visit[i][j]==0 and array[i][j]==1):
        return True
    return False


def bfs(i,j,s) :
    top=0
    while(top<len(queue)):
        a=queue[top][0]
        b=queue[top][1]
        top+=1
        #상하좌우
        if(check(a-1,b)):
            queue.append([a-1,b])
            visit[a-1][b]=1
            newArray[a-1][b]=s
        if(check(a+1,b)):
            queue.append([a+1,b])
            visit[a+1][b]=1
            newArray[a+1][b]=s
        if(check(a,b-1)):
            queue.append([a,b-1])
            visit[a][b-1]=1
            newArray[a][b-1]=s
        if(check(a,b+1)):
            queue.append([a,b+1])
            visit[a][b+1]=1
            newArray[a][b+1]=s

    return



def check2(i,j,k):
    global n
    if(i>=0 and i<n and j>=0 and j<n and newArray[i][j]==k):
        return True
    return False

def check3(i,j,k):
    global n
    if(i>=0 and i<n and j>=0 and j<n and visit[i][j]==0 and newArray[i][j]!=k):
        return True
    return False


def bfs2(i,j,k) :
    top=0
    while(top<len(queue)):
        a=queue[top][0]
        b=queue[top][1]
        top+=1
        #상하좌우
        if(check3(a-1,b,k)):
            queue.append([a-1,b])
            visit[a-1][b]=1
            ans[a-1][b]=ans[a][b]+1
            if(newArray[a-1][b]!=0):
                return ans[a-1][b]
        if(check3(a+1,b,k)):
            queue.append([a+1,b])
            visit[a+1][b]=1
            ans[a+1][b]=ans[a][b]+1
            if(newArray[a+1][b]!=0):
                return ans[a+1][b]
        if(check3(a,b-1,k)):
            queue.append([a,b-1])
            visit[a][b-1]=1
            ans[a][b-1]=ans[a][b]+1
            if(newArray[a][b-1]!=0):
                return ans[a][b-1]
        if(check3(a,b+1,k)):
            queue.append([a,b+1])
            visit[a][b+1]=1
            ans[a][b+1]=ans[a][b]+1
            if(newArray[a][b+1]!=0):
                return ans[a][b+1]

    return


n=int(input())
array=[list(map(int,input().split())) for i in range(n)]
visit=[[0]*n for i in range(n)]
newArray=[[0]*n for i in range(n)]
ans=[[1000000]*n for i in range(n)]
numC=[]

s=1
for i in range(n):
    for j in range(n):
       if(array[i][j]==1 and visit[i][j]==0):
            
            queue=[]
            queue.append([i,j])
            visit[i][j]=1
            newArray[i][j]=s

            numC.append(s)
            bfs(i,j,s)
            s+=1

#print(numC)
min=10000000
#방문 한번 초기화
visit=[[0]*n for i in range(n)]
for k in numC:
    for i in range(n):
        for j in range(n):
            if(newArray[i][j]==0):
                if(check2(i-1,j,k) or check2(i+1,j,k) or check2(i,j-1,k) or check2(i,j+1,k)):
                    
                    ans=[[101]*n for i in range(n)]
                    visit=[[0]*n for i in range(n)]
                    #print(i,j,k)
                    ans[i][j]=0
                    visit[i][j]=1
                    queue=[]
                    queue.append([i,j])
                    cc=bfs2(i,j,k)
                    if(cc):
                        #print(cc)
                        if(min>cc):
                          min=cc
print(min)
