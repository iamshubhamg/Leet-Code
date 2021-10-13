
// You are given an integer array nums. The unique elements of an array are the elements that appear exactly once in the array.

Return the sum of all the unique elements of nums.

import java.util.HashMap;

public class sum_of_unique_elements {
    public static int sumOfUnique(int[] nums) {
        HashMap<Integer, Integer> h = new HashMap<Integer, Integer>();
        for(int i=0;i<nums.length;i++){
            h.put(nums[i],h.getOrDefault(nums[i],0)+1);
        }
        int s=0;
        for(int i=0;i<nums.length;i++){
            if(h.get(nums[i])==1)
                s=s+nums[i];
        }
        return s;
    }
    public static void main(String[] args) {
        int[] num ={1,2,3,2};
        System.out.println(sumOfUnique(num));
    }
}
