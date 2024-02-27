import sys
queue=[]
def bfs(n):
    top=0
    j=1
    while(top<len(queue)):
        c=queue[top]
        top+=1
        for i in range(len(array[c])):
            if(j>=n):
                return
            #print(queue,c,j)     
            if ans[j] in array[c]:
                 visit[ans[j]]=1
                 queue.append(ans[j])
                 j+=1
            else:
                continue
    return


n=int(input())
array=[[] for i in range(n+1)]
visit=[0]*(n+1)
for i in range(n-1):
    a,b=map(int,input().split())
    array[a].append(b)
    array[b].append(a)
ans=list(map(int,input().split()))
queue.append(1)
visit[1]=1
#print(result)
if(ans[0]!=1):
    print(0)
    sys.exit()

bfs(n)
if(queue==ans):
    print(1)
else:
    print(0)

