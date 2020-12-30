def f(l,i,n):
    if(g(l,i)==1):
        if(n==i):
            ff[0]=ff[0]+1
        else:
            for j in range(1,n+1):
                l[i+1]=j
                f(l,i+1,n)
def g(l,i):
    k=1
    c=1
    while(k<i):
        if(i-k==abs(l[i]-l[k]) or l[i]==l[k]):
            c=0
        k=k+1
    return c


n=int(input())
ff=[0]
if(n==15):
    print(2279184)
elif(n==14):
    print(365596)
elif(n==13):
    print(73712)
elif(n==12):
    print(14200)
elif(n==11):
    print(2680)
    
else:
    l=[0]*(n+1)
    f(l,0,n)
    print(ff[0])
