
#모음체크
mcheck=[0]*30
mcheck[1]=1#a
mcheck[5]=1#e
mcheck[9]=1#i
mcheck[15]=1#o
mcheck[21]=1#u

def com(list,l):
    for i in range(len(list)):
        if(l==1):
            yield [list[i]]
        else:
            for j in com(list[i+1:],l-1):
                yield [list[i]]+j

l,c= map(int,input().split())
list=list(input().split())
list.sort()

allList=[]
updateList=[]
for i in com(list,l):
    allList.append(i)


for i in range(len(allList)):
    check=0
    msum=0
    for j in range(l):
        #모음이라면
        if(mcheck[ord(allList[i][j])-ord('a')+1]==1):
            check=1
            msum+=1
    #자음이 하나일 경우
    if(l-msum<2):
        check=0
    if(check==1):
        updateList.append(allList[i])
for i in range(len(updateList)):
    for j in range(l):
        print(updateList[i][j],end="")
    print()
