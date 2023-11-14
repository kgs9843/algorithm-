
def com(vertex, n):
    for i in range(len(vertex)):
        if (n == 1):
            yield str(vertex[i])
        else:
            rest = vertex[i+1:]
            for c in com(rest, n-1):
                yield str(vertex[i])+" " + c
while True:
    narray = list(map(int, input().split()))
    array=[]
    if (len(narray)==1 and narray[0]==0):
        break
    for i in range(1,len(narray)):
        array.append(narray[i])
    #print(array)
    for i in com(array,6):
        print(i)
    print()
