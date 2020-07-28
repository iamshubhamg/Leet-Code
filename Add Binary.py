class Solution:
    def addBinary(self, a: str, b: str) -> str:
        sum1=bin(int(a,2)+int(b,2))                     #converting the number first to ineteger and then adding both and again converting it to the binary
        return(sum1[2:])                                #returning the value after two words bcoz its already had some garbage
