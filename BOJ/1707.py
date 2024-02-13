import sys
sys.setrecursionlimit(21000)
input = sys.stdin.readline


ans=True
def dfs(n):
    global ans
    visit[n]=1
    for i in array[n]:
        if(visit[i]==0):
            check[i]=(check[n]+1)%2
            dfs(i)
        elif(check[n]==check[i]):
            ans=False
            return


k=int(input())
for i in range(k):
    v,e=map(int,input().split())
    #1부터 이므로
    array=list([] for i in range(v+1))
    visit=[0]*(v+1)
    check=[0]*(v+1)
    ans=True
    for i in range(e):
        a,b=map(int,input().split())
        array[a].append(b)
        array[b].append(a)
    for i in range(1,v+1):
        if ans:
            dfs(i)
        else:
            break
    #print(check)
    if ans:
        print("YES")
    else:
        print("NO")
       
    
