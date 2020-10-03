import datetime 
s=[int(i) for i in input().split()][:3]
d, m, y = s
a = datetime.datetime(y, m, d) 
s=[int(i) for i in input().split()][:3]
d, m, y = s
b = datetime.datetime(y, m, d) 
c = abs(a-b) 
print(c.days)
