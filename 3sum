class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums ) {
          vector<vector<int>> res;

    sort(nums.begin(),nums.end());

    for(int i = 0; i < nums.size();i++) {

        if((i > 0) && nums[i]==nums[i-1])
            continue;

        int l = i + 1; 
        int r = nums.size() - 1; 

        while (l < r) {

            int sum = nums[i] + nums[l] + nums[r];

            if(sum < 0)
            l++;
            else
            if(sum > 0)
                r--;
            else
            if(sum == 0) {
                res.push_back(vector<int>{nums[i],nums[l],nums[r]});

                while (l<r && nums[l] == nums[l+1]) 
                    l++;

                while (l<r && nums[r] == nums[r-1]) 
                    r--;
                l++;
                r--;
            }
        }
    }
    return res;
    }
};
