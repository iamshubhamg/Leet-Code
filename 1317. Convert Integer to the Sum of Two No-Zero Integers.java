class Solution {
    public int[] getNoZeroIntegers(int n) {
        int[] result = new int[2];
        int left = 1;
        int right = n-1;
        while(left <= right){
            if(check(left) && check(right)){
                result[0] = left;
                result[1] = right;
                break;
            }
            left++;
            right--;
        }
        return result;
    }
    
    public boolean check(int val){
        while(val != 0){
            int temp = val % 10;
            if(temp == 0)
                return false;
            val/=10;
        }
        return true;
    }
}
