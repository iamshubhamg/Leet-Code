
class Solution {
public:
	void fun( map<int,vector<int>>&mp, TreeNode* root, int level)
{
    if(!root)
        return;
    
    mp[level].push_back(root->val);
    
    fun(mp,root->left,level+1);
    fun(mp,root->right,level+1);
    
}

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>v;
        if(!root)
            return v;
        
        map<int,vector<int>>mp;
        int level=0;
        fun(mp,root,level);
        auto it=mp.begin();
        while(it!=mp.end())
        {
            v.push_back(it->second);  
            it++;
        }
        
        return v;
        
    }
};
Footer
© 2022 GitHub, Inc.
