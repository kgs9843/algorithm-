import sys
check=[1]
s=1
def dfs(x):
    global n,s
    visit[x]=1

    for i in range(len(array[x])):
        if(s>n-1):
            continue
        if(visit[ans[s]]==0 and ans[s] in array[x]):
            check.append(ans[s])
            s+=1
            dfs(ans[s-1])
    
        



n=int(input())
array=list([] for i in range(n+1))
visit=[0]*(n+1)
for i in range(n-1):
    a,b=map(int,input().split())
    array[a].append(b)
    array[b].append(a)
ans=list(map(int,input().split()))

if(ans[0]!=1):
    print(0)
    sys.exit()

dfs(1)
if(check==ans):
    print(1)
else:
    print(0)
