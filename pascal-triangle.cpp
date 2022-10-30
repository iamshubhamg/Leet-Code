/*https://leetcode.com/problems/pascals-triangle-ii/*/
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> ans;
        vector<int> res;
        int i,j;
        for(i=0;i<=rowIndex;i++){
            vector<int> temp(i+1,1);
            for(j=1;j<=i-1;j++){
                temp[j]=ans[i-1][j]+ans[i-1][j-1];
            }
            if(i==rowIndex){
                res=temp;
            }
            else{
                ans.push_back(temp);
            }
           
        }
        return res;
    }
};