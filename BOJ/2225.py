dp = [[0] * 201 for _ in range(201)]

for i in range(1,201):
    dp[0][i]=1

for i in range(1,201):
    for j in range(201):
        sum=0
        for k in range(j+1):
            sum=sum+dp[i-1][k]
            sum=sum%1000000000
        dp[i][j]=sum

a,b=map(int,input().split())
print(dp[a][b])
