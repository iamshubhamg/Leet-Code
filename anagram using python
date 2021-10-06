NO_OF_CHARS = 256
file1 = open("input.txt","r")
file2 = open("input1.txt","r")
str1 = file1.readline().rstrip()
str2 = file2.readline().rstrip()
file1.close()
file2.close()
count1 = [0] * NO_OF_CHARS 
count2 = [0] * NO_OF_CHARS 
for i in str1: 
    count1[ord(i)]+= 1
for i in str2: 
    count2[ord(i)]+= 1
flag = True
if len(str1) != len(str2): 
    flag = False
for i in range(NO_OF_CHARS): 
    if count1[i] != count2[i]:
        flag = False
if(flag):
    print("Anagram")
else:
    print("Not Anagram")
    
================ICODE CODE======================
file=open("input.txt","r")
file1=open("input1.txt","r")
s=list(str(sorted(file)))
s.sort()
s1=list(str(sorted(file1)))
s1.sort()
if s==s1:
    print("Anagram")
else:
    print("Not Anagram")
