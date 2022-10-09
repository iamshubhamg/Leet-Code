class Solution {
public:
    int n,m,k;
    const int mod=1e9+7;
    
    int numberOfPaths(vector<vector<int>>& grid, int K) {
         n=grid.size(),m=grid[0].size(),k=K;
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(m+1,vector<int>(k+1,-1)));
        auto solve=[&](int i, int j ,int currSum,auto &self)
        {
             if(i==n || j==m) return 0;
        if(i==n-1 and j==m-1)
        {
            currSum+=grid[i][j];
            if(currSum%k==0) return 1;
            else return 0;
        }
        if(dp[i][j][currSum]!=-1)return dp[i][j][currSum];
        return dp[i][j][currSum]=(self(i+1,j,(currSum+grid[i][j])%k,self) % mod +self(i,j+1,(currSum+grid[i][j])%k,self)%mod)%mod;
        };
        return solve(0,0,0,solve);
    }
};
