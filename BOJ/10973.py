import sys


def printList(lt):
    for i in range(len(lt)):
        print('{0}'.format(lt[i]),end = " ")


n=int(input())
array=list(map(int,input().split()))
b1=-1
for i in range(0,len(array)-1):
    if(array[i]>array[i+1]):
        b1=i
if(b1==-1):
    print(-1)
    sys.exit()
min=10001
for i in range(b1+1,len(array)):
    if(array[i]<array[b1]):
        if(min>array[b1]-array[i]):
            min=array[b1]-array[i]
            minIndex=i

#swap
k=array[minIndex]#4
array[minIndex]=array[b1]#
array[b1]=k

list1=array[:b1+1]
list2=array[b1+1:]
list2.sort()
list2.reverse()
answer=list1+list2
printList(answer)
