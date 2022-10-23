// Problem link: https://leetcode.com/problems/unique-paths-ii/
// DP based solution
// If the current cell is an obstacle, then the number of ways to reach the current cell is 0.
// If the current cell is not an obstacle, then the number of ways to reach the current cell is
//  the sum of the number of ways of reaching the cell directly above it and the number of ways of reaching the cell directly to the left of it.
// Hence, the state equation is dp[i][j]=dp[i-1][j]+dp[i][j-1]
class Solution
{
public:
    int uniquePathsWithObstacles(vector<vector<int>> &g)
    {
        int m = g[0].size();
        int n = g.size();
        // int dp[n][m];
        // dp[m][n]=g[m-1][n-1]^1;
        if (g[0][0] == 1)
            return 0;
        g[0][0] = 1;
        for (int i = 1; i < n; i++)
        {
            if (g[i][0] == 0 && g[i - 1][0] == 1)
                g[i][0] = 1;
            else
                g[i][0] = 0;
        }
        for (int i = 1; i < m; i++)
        {
            if (g[0][i] == 0 && g[0][i - 1] == 1)
                g[0][i] = 1;
            else
                g[0][i] = 0;
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < m; j++)
            {
                if (g[i][j] == 0)
                    g[i][j] = g[i - 1][j] + g[i][j - 1];
                else
                    g[i][j] = 0;
            }
        }
        return g[n - 1][m - 1];
    }
};