import calendar 
rate = int(input())
date = input()
d=0
day, month, year = (int(i) for i in date.split(' '))     
dnum = calendar.weekday(year, month, day) 
if dnum==0:
    d=5
elif dnum==1:
    d=7.5
elif dnum==2:
    d=10
elif dnum==3:
    d=12.5
elif dnum==4:
    d=15
elif dnum==5:
    d=20
elif dnum==6:
    d=25
print("%.2f"%(rate-(rate*d/100)))
days =["Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"]
print(days[dnum])
