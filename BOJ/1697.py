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
        if(check(a+1)):
            queue.append(a+1)
            visit[a+1]=1
            array[a+1]=array[a]+1
        if(check(2*a)):
            queue.append(2*a)
            visit[2*a]=1
            array[2*a]=array[a]+1


n,k=map(int,input().split())
visit=[0]*100001
array=[0]*100001
queue=[]
queue.append(n)
visit[n]=1
bfs(n,k)
print(array[k])
