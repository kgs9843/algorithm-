def par(array,M):
    for i in range(len(array)):
        if(M==1):
            yield str(array[i])
        else:
            for j in par(array,M-1):
                yield str(array[i])+ " " + j




N,M = map(int,input().split())
array = list(map(int,input().split()))
array.sort()
for i in par(array,M):
    print(i)
