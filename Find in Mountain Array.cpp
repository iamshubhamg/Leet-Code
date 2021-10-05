/****************************************************************************
Leetcode - 1095. Find in Mountain Array (Hard)

Question:

(This problem is an interactive problem.)

You may recall that an array arr is a mountain array if and only if:

arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
Given a mountain array mountainArr, return the minimum index such that mountainArr.get(index) == target.
If such an index does not exist, return -1.


You cannot access the mountain array directly. You may only access the array using a MountainArray interface:

MountainArray.get(k) returns the element of the array at index k (0-indexed).
MountainArray.length() returns the length of the array.
Submissions making more than 100 calls to MountainArray.get will be judged Wrong Answer.
Also, any solutions that attempt to circumvent the judge will result in disqualification.


Example 1:

Input: array = [1,2,3,4,5,3,1], target = 3
Output: 2
Explanation: 3 exists in the array, at index=2 and index=5. Return the minimum index, which is 2.

****************************************************************************/






/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:

	//searching in the increasing part of the array
    int binsearch_incr(int l,int h,int tar,MountainArray &mountainArr)
    {
        while(l<=h)
        {
            int mid = l+(h-l)/2;
            if(mountainArr.get(mid) == tar)
                return mid;
            else if(mountainArr.get(mid) > tar)
                h = mid-1;
            else
                l = mid+1;
        }
        return -1;
    }
    
	//searching in the deccreasing part of the array
    int binsearch_decr(int l,int h,int tar,MountainArray &mountainArr)
    {
        while(l<=h)
        {
            int mid = l+(h-l)/2;
            if(mountainArr.get(mid) == tar)
                return mid;
            else if(tar > mountainArr.get(mid))
                h = mid-1;
            else
                l = mid+1;
        }
        return -1;
    }
    
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n = mountainArr.length();
        int l = 0,h = n-1;
        while(l<h)
        {
            int mid = l+(h-l)/2;
            if(mountainArr.get(mid) > mountainArr.get(mid+1))
                h = mid;
            else
                l = mid + 1;
        }
        cout<<mountainArr.get(l);
        int ans_left_half = binsearch_incr(0,l,target,mountainArr); 
        return ((ans_left_half == -1) ? binsearch_decr(l,n-1,target,mountainArr) : ans_left_half);           
    }
};