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
    
    TreeNode * solution(vector<int>& preorder, vector<int>& inorder,int &pointer,int left,int right){
        
        // base case
        // cout << pointer << endl;
        
        if(pointer == preorder.size()){
            // cout << "UWU" << endl;
            return NULL;
        }
        
    
        if(left > right){
            
            
            pointer--;
            // cout << "END" << endl;
            return NULL;
        }
        
        // recursive case
        
        TreeNode * n = new TreeNode(preorder[pointer]);
        int ser = preorder[pointer];
        
        // vector<int>::iterator it;
        
        int posn = std::find (inorder.begin(), inorder.end(), ser) - inorder.begin();
        // int posn =  find(inorder.begin(),inorder.end(),preorder[pointer]);
        
        // cout << n -> val << " " << left << " " << right << endl;
        n -> left = solution(preorder,inorder,++pointer,left,posn - 1);
        n -> right = solution(preorder,inorder,++pointer,posn+1, right);
        return n;
        
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int a = 0;
        return solution(preorder,inorder,a,0,preorder.size()-1);
    }
};