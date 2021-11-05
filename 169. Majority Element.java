class Solution {
    public int majorityElement(int[] nums) {
        int curr = nums[0];
        int count =0;
        for(int i:nums) {
            count += (curr == i) ? 1 : -1;
            if(count == 0) {
                curr = i;
                count++;
            }
        }
        return curr;
    }
}
