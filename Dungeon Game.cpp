class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& a) {
        int n=a.size();
        int m=a[0].size();
        int dp[n][m];
        if(a[n-1][m-1]>0)
            dp[n-1][m-1]=0;
        else
            dp[n-1][m-1]=a[n-1][m-1];
        //int ans=1;
        for(int i=n-2;i>=0;i--)
        {
            dp[i][m-1]=a[i][m-1]+dp[i+1][m-1];
            if(dp[i][m-1]>0)
                dp[i][m-1]=0;
        }
        
        for(int i=m-2;i>=0;i--)
        {
            dp[n-1][i]=a[n-1][i]+dp[n-1][i+1];
            if(dp[n-1][i]>0)
                dp[n-1][i]=0;
        }
        for(int i=n-2;i>=0;i--)
        {
            for(int j=m-2;j>=0;j--)
            {
                dp[i][j]=max(dp[i+1][j],dp[i][j+1]);
               dp[i][j]+=a[i][j];
                if(dp[i][j]>0)
                    dp[i][j]=0;
                
            }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<dp[i][j]<<" ";
            }
            cout<<"\n";
        }
        return (-dp[0][0])+1;
    }
};
