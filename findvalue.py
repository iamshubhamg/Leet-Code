def findValue(n1,n2):
    s=0
    for i in range(0,1000000):
        if((n2*i+1)%n1==0):
            s=1
            return ((n2*i+1)//n1)
    if s==0:
        return -1
n1=int(input())
n2=int(input())
print(findValue(n1,n2))
