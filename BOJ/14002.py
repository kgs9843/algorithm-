n=int(input())
array=list(map(int,input().split()))
dp=[1]*n
dp[0]=1
answer=list()
for i in range(1,n):
    max1=0
    for j in range(i-1,-1,-1):
        if(array[i]>array[j]):
            if(max1<dp[j]):
                max1=dp[j]
    dp[i]=max1+1
max=0
for i in range(n):
    if(max<dp[i]):
        max=dp[i]
check=0
print(max)
c=0
for i in range(n-1,-1,-1):
    if(check==1):
        if(dp[i]==max and array[i]<c):
            max=max-1
            c=array[i]
            answer.append(c)
    if(dp[i]==max):
        c=array[i]
        answer.append(c)
        max=max-1
        check=1
answer.sort()
for i in range(len(answer)):
    print(answer[i],end=' ')
