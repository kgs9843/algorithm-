

n=int(input())
array=list(list(map(int,input().split())) for i in range(n))
compileArray=list()
for i in range(n):
    #날짜가 넘어가면 추가 안시킴
    if(i+array[i][0]<=n):
        if(i!=0):
            #날짜를 하나 빼준다.
            for j in range(len(compileArray)):
                if(compileArray[j][0]!=0):
                    compileArray[j][0]-=1
                #0일경우 합쳐준다.
                if(compileArray[j][0]==0):
                    c=array[i][0]
                    d=compileArray[j][1]+array[i][1]
                    compileArray.append([c,d])
        
        compileArray.append(array[i])
    else:
            for j in range(len(compileArray)):
                if(compileArray[j][0]!=0):
                    compileArray[j][0]-=1
#print(compileArray)
max=0
for i in range(len(compileArray)):
    if(max<compileArray[i][1]):
        max=compileArray[i][1]

print(max)
