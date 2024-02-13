answer=0

def check(i):
    global n
    if(i>=0 and i<n):
        return True
    else:
        return False


def dfs(i,j):
    global n
    global answer
    
    visit[i][j]=1

    answer+=1

    #상 하 좌 우 순서
    if(check(i-1) and array[i-1][j]=='1' and visit[i-1][j]==0):
        #print("아아")
        dfs(i-1,j)
    if(check(i+1) and array[i+1][j]=='1'and visit[i+1][j]==0):
        #print("아아1")
        dfs(i+1,j)
    if(check(j-1) and array[i][j-1]=='1'and visit[i][j-1]==0):
        #print("아아2")
        dfs(i,j-1)
    if(check(j+1) and array[i][j+1]=='1'and visit[i][j+1]==0):
        #print("아아3")
        dfs(i,j+1)

    return


n=int(input())
array=list(input() for i in range(n))
visit=list([0]*n for i in range(n))
#print(array)
number=0
ans=[]
for i in range(n):
    for j in range(n):
        if(array[i][j]=='1' and visit[i][j]==0):
            #print(i,j)
            answer=0
            #함수
            dfs(i,j)
            number+=1
            ans.append(answer)

print(number)

#print(ans)
ans.sort()
for i in ans:
    print(i)
