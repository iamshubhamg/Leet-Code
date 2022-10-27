class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(root==NULL)return NULL;
        
        if(root==p || root==q)return root;  //if current node is same as 'p' OR 'q'.
        
        TreeNode* left= lowestCommonAncestor(root->left,p,q);
        TreeNode* right=lowestCommonAncestor(root->right,p,q);
        
        if(left!=NULL && right!=NULL)
            return root;// this is the LCA node of p and q


        if(left!=NULL)
            return left;
        else // 
            return right;
    }
};