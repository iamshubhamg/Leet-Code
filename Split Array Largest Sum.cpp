/****************************************************************************
Leetcode - 410. Split Array Largest Sum (Hard)

Question:
Given an array nums which consists of non-negative integers and an integer m,
you can split the array into m non-empty continuous subarrays.

Write an algorithm to minimize the largest sum among these m subarrays.

 

Example 1:

Input: nums = [7,2,5,10,8], m = 2
Output: 18

Explanation:
There are four ways to split nums into two subarrays.
The best way is to split it into [7,2,5] and [10,8],
where the largest sum among the two subarrays is only 18.

****************************************************************************/


class Solution {
public:
    //piece refers to an individual subarray
    int pieces(vector<int>nums,int max_val)
    {
        int sum = 0, piece = 1;
        for(auto i:nums)
        {
            sum+=i;
            if(sum>max_val)
            {
                piece++;
                sum = i;
            }
        } 
        return piece;
    }
    
    int splitArray(vector<int>& nums, int m) {
        int n = nums.size();
        int l=INT_MIN, h=0;
        
        for(auto i:nums)
        {
            l = max(l,i);
            h+=i;
        } 
        
        while(l<h)
        {
            int mid = l+(h-l)/2;
            int piece = pieces(nums,mid);
            
            if(piece > m)
                l = mid+1;
            else
                h = mid;
        }
        
        return l;
    }
};