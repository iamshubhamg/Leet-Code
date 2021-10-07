// https://leetcode.com/problems/regular-expression-matching/

class Solution {
public:
    int match(string& s, string& p, vector<vector<int>>& dp, int i, int j) {
        int n = s.length();
        int m = p.length();

        if (i == n && j == m) {
            dp[i][j] = 1;
            return 1;
        }

        if (dp[i][j] == -1) {
            int ans = 0;
            if (j < m) {
                bool first_match = i < n && (s[i] == p[j] || p[j] == '.');
                if (j + 1 < m && p[j + 1] == '*')
                    ans = match(s, p, dp, i, j + 2) || (first_match && match(s, p, dp, i + 1, j));
                else if (i + 1 <= n && j + 1 <= m)
                    ans = first_match && match(s, p, dp, i + 1, j + 1);
            }

            dp[i][j] = ans;
        }

        return dp[i][j];
    }

    bool isMatch(string s, string p) {
        int n = s.length();
        int m = p.length();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));

        return match(s, p, dp, 0, 0);
    }
};
