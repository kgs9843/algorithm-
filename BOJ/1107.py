import sys

def f(a,c):
    for i in a:
        if(i in c):
            return 0
    return 1



quesArray=[0]*9
ansArray=list()
a=input()
a_1=a

b_1=int(input())
#b_1이 0일 경우
if(b_1==0):
    ans=min(abs(int(a_1)-100),len(a))
    print(ans)
    sys.exit()


b=input()
c=list(b.split())

#버튼이 다 고장난 경우
if(b_1==10):
    ans=abs(int(a_1)-100)
    print(ans)
    sys.exit()
# 0번 빼고 다 고장난 경우
elif(b_1==9 and ('0' not in c)):
    #0번누르고 +가는 경우, 100에서 뺀경우
    ans=min(int(a_1)+1,abs(100-int(a_1)))
    print(ans)
    sys.exit()



#일반적인 경우
ans1,ans2=(int(a),int(a))
while f(a,c)==0:
    ans1=int(a) + 1
    a=str(ans1)
    #print(ans1)
#print(ans1)
a=a_1
while f(a,c)==0 and ans2!=-1:
    ans2=int(a) - 1
    a=str(ans2)

ans1=abs(ans1-int(a_1))+len(str(ans1))
#print(ans2)
if(ans2!=-1): ans2=abs(int(a_1)-ans2)+len(str(ans2))
else: ans2 = 5000000
ans3=abs(int(a_1)-100)


ans=min(ans1,ans2,ans3)
print(ans)

        
