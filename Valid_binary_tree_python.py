'''
Given the root of a binary tree, determine if it is a valid binary search tree (BST).
A valid BST is defined as follows:

The left subtree of a node contains only nodes with keys less than the node's key.
The right subtree of a node contains only nodes with keys greater than the node's key.
Both the left and right subtrees must also be binary search trees.

Input: root = [2,1,3]
Output: true

Input: root = [5,1,4,null,null,3,6]
Output: false

'''


#code

class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        def valid(node, left, right):
            if not left < node.val < right:
                    return False
            if node.left:
                    new_right=node.val
                    if not valid(node.left,left,new_right):
                        return False
            if node.right:
                    new_left=node.val
                    if not valid(node.right,new_left,right):
                        return False
            return True
        return valid(root, -inf, +inf)