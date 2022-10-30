# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def addOneRow(self, root: Optional[TreeNode], val: int, depth: int) -> Optional[TreeNode]:
        
        if depth == 1:
            newRoot = TreeNode(val) 
            newRoot.left = root 
            return newRoot 
        
        def traverse(root, curDepth, reqDepth): 
            if root is None: 
                return 
            
            if curDepth == reqDepth-1: 
                temp = root.left
                root.left = TreeNode(val) 
                root.left.left = temp 
                temp = root.right
                root.right = TreeNode(val) 
                root.right.right = temp 
                
                return 
            
            traverse(root.left, curDepth+1, reqDepth) 
            traverse(root.right, curDepth+1, reqDepth) 
            
            return 
        
        traverse(root, 1, depth)
        
        return root
