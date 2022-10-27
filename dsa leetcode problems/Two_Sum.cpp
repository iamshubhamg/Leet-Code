// https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left{},right{};
        vector<int> ans;
        for(int i{0}; i<nums.size(); ++i){
            for(int j{i+1}; j<nums.size(); ++j){
                if(nums.at(i) + nums.at(j) == target){
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
        }
        return ans;
    }
};
