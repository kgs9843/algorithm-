sum=0
def f(c,input):
    if(c== 0):
        return 0
    sum= (input+1 - c) + f(int(c/10),input)
    return sum




a=input()
b=len(a)
c=1
for i in range(1,b):
    c*=10
 

sum = f(c,int(a))

print(sum)
