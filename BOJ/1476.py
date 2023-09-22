a_e,a_s,a_m = map(int,input().split(" "))
e,s,m=(0,0,0)
sum=0
while(e != a_e or s != a_s or m != a_m):
    #지구
    e+=1
    if(e>15):
        e=1
    #태양
    s+=1
    if(s>28):
        s=1
    #달
    m+=1
    if(m>19):
        m=1
    sum+=1
print(sum)


