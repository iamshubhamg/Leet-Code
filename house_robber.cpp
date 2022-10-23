// Problem link : https://leetcode.com/problems/house-robber/
// Easy DP based solution
// If the ith house is robbed, then the maximum amount of money that can be robbed is the maximum amount
// of money that can be robbed till the (i-2)th house + the amount of money in the ith house.
// If the ith house is not robbed, then the maximum amount of money that can be robbed is the maximum amount
// of money that can be robbed till the (i-1)th house.
// Hence, the state equation is dp[i]=max(dp[i-1],dp[i-2]+nums[i])

class Solution
{
public:
    int rob(vector<int> &nums)
    {
        if (nums.size() == 1)
            return nums[0];
        int dp[nums.size()];
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for (int i = 2; i < nums.size(); i++)
        {
            dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
        }
        return dp[nums.size() - 1];
    }
};