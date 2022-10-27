/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        
        
        queue<TreeNode *> q;
        vector<int> ans;
        q.push(root);
        if(!root) return ans;
        q.push(NULL);
        
        int prev;
        
        while(!q.empty()){
            
            TreeNode * n = q.front();
            q.pop();
            
            if(n == NULL){
                ans.push_back(prev);    
                if(!q.empty()){
                    q.push(NULL);
                }        
                continue;
            }
            if(n -> left) q.push(n -> left);
            
            if(n -> right) q.push(n->right);
            
            prev = n -> val;
        }
        return ans;
    }
};