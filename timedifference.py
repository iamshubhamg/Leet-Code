import datetime 
from fractions import Fraction
ss=[int(i) for i in input().split(":")][:3]
h, m, s = ss
a = datetime.datetime(1, 1, 1, h, m, s)  
ss=[int(i) for i in input().split(":")][:3]
h, m, s = ss
b = datetime.datetime(1, 1, 1, h, m, s) 
ss=input()
c = abs(a-b)
c = c.seconds
if ss.casefold()=="h":
    if c//3600==0 and c!=0:
        print("1",end=" ")
    else:
        print(c//3600,end=" ")
    if Fraction(c%3600, 3600)!=0:
        print(Fraction(c%3600, 3600),end=" ")
    print("Hours")
elif ss.casefold()=="m":
    if c//60==0 and c!=0:
        print("1",end=" ")
    else:
        print(c//60,end=" ")
    if Fraction(c%60, 60)!=0:
        print(Fraction(c%60, 60),end=" ")
    print("Minutes")
else:
    print(c,"Seconds")  
