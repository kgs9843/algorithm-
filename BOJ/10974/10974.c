def com(array,n):
    for i in range(len(array)):
        if(n==1):
            yield str(array[i])
        else:
            for j in com(array[:i]+array[i+1:],n-1):
                yield str(array[i])+" "+j



n=int(input())
array=list( i for i in range(1,n+1))
for j in com(array,n):
    print(j)
