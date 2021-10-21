'''
Longest Substring Without Repeating Characters

Given a string s, find the length of the longest substring without repeating characters.

Example:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
'''
#code
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        mx=0
        start=-1
        h={}
        for i,a in enumerate(s):
            if a in h and h[a]>start:
                start=h[a]
            mx=max(mx,i-start)
            h[a]=i
        return mx