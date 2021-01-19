import sys
N=int(input())
l1 = list(map(int,input().split()))

M=int(input())
l2=list(map(int,input().split()))

l1.sort()
l2.sort()
c=0

if(l2[-1]>l1[-1]):
    print(-1)
    sys.exit()
elif(N==1):
    print(M)
    sys.exit()
else:
    while(1):
        for i in range(len(l1)-1,-1,-1):
            b=0
            for j in range(len(l2)-1,-1,-1):
                if(l2[j]<=l1[i]):
                    b=l2[j]
                    break
                else:
                    continue
            if(b!=0):
                l2.remove(b)
            if(len(l2)==0):
                break
        c=c+1
        if(len(l2)==0):
            break
    print(c)
    sys.exit()

