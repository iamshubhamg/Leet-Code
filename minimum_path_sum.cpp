// problem link: https://leetcode.com/problems/minimum-path-sum/
// DP based solution : Suppose the minimum path sum of reaching at point (i, j) is cost[i][j],
// then the state equation is cost[i][j] = min(cost[i - 1][j], cost[i][j - 1]) + grid[i][j].
// Since the only way to traverse along first row is towards right,hence cost[i][0]=cost[i-1][0]+grid[i][0].
// Similarly,the only way to traverse along first column in downwards,hence cost[0][i]=cost[0][i-1]+grid[0][i].
class Solution
{
public:
    int minPathSum(vector<vector<int>> &grid)
    {
        int m = grid.size(), n = grid[0].size();
        int dp[m][n];
        dp[0][0] = grid[0][0];
        for (int i = 1; i < m; i++)
        {
            dp[i][0] = dp[i - 1][0] + grid[i][0];
        }
        for (int i = 1; i < n; i++)
        {
            dp[0][i] = dp[0][i - 1] + grid[0][i];
        }
        for (int i = 1; i < m; i++)
        {
            for (int j = 1; j < n; j++)
                dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];
        }
        return dp[m - 1][n - 1];
    }
};