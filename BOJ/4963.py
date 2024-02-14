import sys
sys.setrecursionlimit(10**5)
answer=0

def check(i,j):
    global w,h
    if(i>=0 and i<h and j>=0 and j<w):
        return True
    else:
        return False


def dfs(i,j):
    global n
    global answer
    
    visit[i][j]=1

    answer+=1

    #상 하 좌 우 순서
    if(check(i-1,j) and array[i-1][j]==1 and visit[i-1][j]==0):
        #print("아아")
        dfs(i-1,j)
    if(check(i+1,j) and array[i+1][j]==1 and visit[i+1][j]==0):
        #print("아아1")
        dfs(i+1,j)
    if(check(i,j-1) and array[i][j-1]==1 and visit[i][j-1]==0):
        #print("아아2")
        dfs(i,j-1)
    if(check(i,j+1) and array[i][j+1]==1 and visit[i][j+1]==0):
        #print("아아3")
        dfs(i,j+1)
    #왼쪽위
    if(check(i-1,j-1) and array[i-1][j-1]==1 and visit[i-1][j-1]==0):
        dfs(i-1,j-1)
    #오른쪽위
    if(check(i-1,j+1) and array[i-1][j+1]==1 and visit[i-1][j+1]==0):
        dfs(i-1,j+1)
    #왼쪽아래
    if(check(i+1,j-1) and array[i+1][j-1]==1 and visit[i+1][j-1]==0):
        dfs(i+1,j-1)
    #오른쪽아래
    if(check(i+1,j+1) and array[i+1][j+1]==1 and visit[i+1][j+1]==0):
        dfs(i+1,j+1)
    return

while(True):
    w,h=map(int,input().split())
    #종료조건
    if(w==0 and h==0):
        break
    array=list(list(map(int,input().split())) for i in range(h))
    visit=list([0]*w for i in range(h))
    
    number=0
    #print(array)
    for i in range(h):
        for j in range(w):
            if(array[i][j]==1 and visit[i][j]==0):
                #print(i,j)
                answer=0
                #함수
                dfs(i,j)
                number+=1
    print(number)


