def par(array,M):
    for i in range(len(array)):
        if(M==1):
            yield str(array[i])
        else:
            for j in par(array[i:],M-1):
                yield str(array[i])+ " " + j




N,M = map(int,input().split())
array = list(i for i in range(1,N+1))
for i in par(array,M):
    print(i)
