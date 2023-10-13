def comb(array,M):
    for i in range(len(array)):
        if M==1:
            yield str(array[i])
        else :
            for j in comb(array,M-1):
                yield str(array[i])+ " "+ j


N,M = map(int,input().split())
array=[i for i in range(1,N+1)]  
for i in comb(array,M):
    print(i)
