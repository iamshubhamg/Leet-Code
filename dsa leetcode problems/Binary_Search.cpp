// https://leetcode.com/problems/binary-search/

class Solution {
    public int search(int[] nums, int target) {
        int start = 0;
        int end = nums.length-1;
        int ans = -1;
        while(start<=end){
            int mid = (start+end)/2;
            if(target < nums[mid]){
                end = mid-1;
            }
            else if(target > nums[mid]){
                start = mid+1;
            }
            else if(target == nums[mid]){
                ans = mid;
                break;
            }
        }
        return ans;
    }
}
