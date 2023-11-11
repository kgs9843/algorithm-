def com(array,n):
    for i in range(len(array)):
        if(n==1):
            yield str(array[i])
        else:
            for j in com(array[:i]+array[i+1:],n-1):
                yield str(array[i])+" " +j

        



n=int(input())
array=list(map(int,input().split()))
array.sort()
listA = []*10000
for i in com(array,n):
    listA.append(i)
#print(listA)
max=0
for i in range(len(listA)):
    sum=0
    listB=list(map(int,listA[i].split()))
    for j in range(1,n):
        sum=sum+abs(listB[j-1]-listB[j])
    if(sum>max):
        max=sum
print(max)
