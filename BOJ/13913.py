def check(x):
    if(x>=0 and x<100001 and visit[x]==0):
        return True
    return False



def bfs(n,k):
    top=0
    while(top<len(queue)):
        if(visit[k]!=0):
            return
        a=queue[top]
        top+=1

        if(check(a-1)):
            queue.append(a-1)
            visit[a-1]=1
            array[a-1]=array[a]+1
            reconsturct[a-1] = a
        if(check(a+1)):
            queue.append(a+1)
            visit[a+1]=1
            array[a+1]=array[a]+1
            reconsturct[a+1] = a
        if(check(2*a)):
            queue.append(2*a)
            visit[2*a]=1
            array[2*a]=array[a]+1
            reconsturct[2*a] = a


n,k=map(int,input().split())
visit=[0]*100001
array=[0]*100001
reconsturct=[-1]*100001
queue=[]
queue.append(n)
visit[n]=1
bfs(n,k)
print(array[k])

c = []

while k!=-1:
    c.append(k)
    k = reconsturct[k]

print(*c[::-1])
