//Problem Link : https://leetcode.com/problems/largest-rectangle-in-histogram/
class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int n = (int)h.size();
        int ans = 0;
        stack<int> s;
        for(int i=0;i< n;i++)
        {
            if(s.empty()) {s.push(i);continue;}
            while(h[s.top()]>h[i])
            {
                int temp = s.top();
                s.pop();
                int area;
                if(s.empty()){
                    area = h[temp]*i;
                    ans = max(ans,area);
                    break;             
                }
                else {
                    area = h[temp]*(i-s.top()-1);
                    ans = max(ans,area);
                }
            }
            s.push(i);
        }
        //i==n now
        while(!s.empty())
        {
            int temp = s.top();
            s.pop();
            int area;
            if(s.empty()) area = h[temp]*n;
            else area = h[temp]*(n-s.top()-1);
            ans = max(ans,area);
        }
        return ans;        
    }
};
