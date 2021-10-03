class Solution:
    def longestCommonPrefix(self, strs):
        if (len(strs)==0):
            return ""
        if (len(strs)==1):
            return strs[0]

        for j in xrange(0,len(strs[0])):
            for i in xrange(0,len(strs)-1):
                if (j>=len(strs[i+1]) or strs[i][j]!=strs[i+1][j]):
                    if j==0:
                        return ""
                    else:
                        return strs[i][0:j]
        return strs[0]
