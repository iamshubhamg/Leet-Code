Problem Description :

Given a 32-bit signed integer, reverse digits of an integer.

Example 1:

Input: 123
Output: 321
Example 2:

Input: -123
Output: -321
Example 3:

Input: 120
Output: 21

My solution :

class Solution:
    def reverse(self, x: int) -> int:
        if x>= 2**31-1 or x<= -2**31: return 0                              #for checking the case to be in the given range of 2^32
        else:
            strg=str(x)
            if(x>=0):                                                       #if the number is positive then just simply reverse the string
                revst=strg[::-1]
            else:
                temp=strg[1:]                                               #if negative then store the positive positive part only in the string
                temp2=temp[::-1]
                revst="-"+temp2                                             #reverse the strng and add negative to it
        if int(revst)>= 2**31-1 or int(revst)<=-2**31: return 0
        else: return int(revst)                                             #return the value if its in the range
