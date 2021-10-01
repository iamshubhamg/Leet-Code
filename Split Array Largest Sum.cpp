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