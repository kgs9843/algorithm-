def par(array,M):
    for i in range(len(array)):
        if(M==1):
            yield str(array[i])
        else:
            for j in par(array[:i]+array[i+1:],M-1):
                yield str(array[i])+ " " + j




N,M = map(int,input().split())
array = list(map(int,input().split()))
array.sort()
a=[]
for i in par(array,M):
    a.append(i)

b=set(a)
for i in b:
    print(i)
