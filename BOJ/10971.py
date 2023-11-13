
from itertools import permutations
'''
def com(vertex, n):
    if n == 1:
        for i in range(len(vertex)):
            yield [vertex[i]]
    else:
        for i in range(len(vertex)):
            rest = vertex[:i] + vertex[i+1:]
            for c in com(rest, n-1):
                yield [vertex[i]] + c
'''
n = int(input())
vertex = [i for i in range(n)]
array = [list(map(int, input().split())) for _ in range(n)]

#comList = list()

comList = list(permutations(range(n)))
'''
for i in com(vertex, n):
    i = i + [i[0]]
    comList.append(i)
'''

min_sum = float('inf')
for k in range(len(comList)):
    cur_sum = 0
    error=0
    for i in range(n-1):
        a=array[comList[k][i]][comList[k][i+1]]
        if(a==0):
            error=1
            break
        cur_sum += a
    cur_sum+= array[comList[k][i+1]][comList[k][0]]
    if(array[comList[k][i+1]][comList[k][0]]==0):
            error=1
    if(error==1):
        continue
    min_sum = min(min_sum, cur_sum)

print(min_sum)
