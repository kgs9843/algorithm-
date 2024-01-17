n,s=map(int,input().split())
array=list(map(int,input().split()))
answer=0
for i in range(1,1<<n):
    sum=0
    for j in range(n):
        if(1<<j&i):
            sum=sum+array[j]
            #print(array[j],end=' ')
    #print()
    if(sum==s):
        answer+=1
print(answer)
