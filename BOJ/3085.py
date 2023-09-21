

def findLong(new_Array,n):
    count_max=0
    
    for i in range(0,n):
        for j in range(0,n):
            r_sum=0
            l_sum=0
            u_sum=0
            d_sum=0
            r=j
            l=j
            u=i
            d=i
            #인덱스 기준 우측
            while(r<n and array[i][r]==array[i][j]):
                r_sum+=1
                r+=1
            #인덱스 기준 좌측
            while(l>-1 and array[i][l]==array[i][j]):
                l_sum+=1
                l-=1
            #인덱스 기준 하측
            while(d<n and array[d][j]==array[i][j]):
                d_sum+=1
                d+=1
            #인덱스 기준 상측
            while(u>-1 and array[u][j]==array[i][j]):
                u_sum+=1
                u-=1
            #인접한 열과 행 중 큰 값 리턴
            count_max=max(l_sum,r_sum,u_sum,d_sum,count_max)
    return count_max
     

n=int(input())
array = [list(input()) for _ in range(n)]
"""
array=list()
for i in range(0,n):
    string = input()
    array.append(string)
"""
count_max=0
#새로운 new_Array를 만든다.
new_Array = array.copy()

c=0
for i in range(0,n):
    for j in range(0,n):
        #if(new_Array[i][j]==new_Array[s][m]):continue
        
        #위치를 바꿔줌
        #동쪽
        if(j+1<n-1):
            #교환
            new_Array[i][j],new_Array[i][j+1] = new_Array[i][j+1], new_Array[i][j]
            #같은 문자로 된 가장 긴 행이나 열을 찾는다
            c=findLong(new_Array,n)
            #print(new_Array)
            if(c>count_max):
                count_max=c
            #교환 복구
            new_Array[i][j],new_Array[i][j+1] = new_Array[i][j+1], new_Array[i][j]
            
        #print(new_Array)
        #print(c)        
        #서쪽
        if(j-1>=0):
            new_Array[i][j],new_Array[i][j-1] = new_Array[i][j-1], new_Array[i][j]
            c=findLong(new_Array,n)
            if(c>count_max):
                count_max=c
            new_Array[i][j],new_Array[i][j-1] = new_Array[i][j-1], new_Array[i][j]
        
        #print(new_Array)
        #print(c)     
        #남쪽
        if(i+1<n-1):
            new_Array[i][j], new_Array[i+1][j] = new_Array[i+1][j], new_Array[i][j]
            c=findLong(new_Array,n)
            if(c>count_max):
                count_max=c
            new_Array[i][j], new_Array[i+1][j] = new_Array[i+1][j], new_Array[i][j]

        #print(new_Array)
        #print(c)     
        #북쪽
        if(i-1>=0):
            new_Array[i][j], new_Array[i-1][j] = new_Array[i-1][j], new_Array[i][j]
            c=findLong(new_Array,n)
            if(c>count_max):
                count_max=c     
            new_Array[i][j], new_Array[i-1][j] = new_Array[i-1][j], new_Array[i][j]   
        #print(new_Array)
        #print(c)          

print(count_max)
