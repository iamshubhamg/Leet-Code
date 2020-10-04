class Node:
    def __init__(self, data):
        self.right = self.left = None
        self.data = data


class Solution:
    def insert(self, root, data):
        if root is None:
            return Node(data)
        else:
            if data <= root.data:
                cur = self.insert(root.left, data)
                root.left = cur
            else:
                cur = self.insert(root.right, data)
                root.right = cur
        return root

    def getHeight(self, root):
        left_count = right_count = 0
        root_left = root_right = root
        while root_left.left is not None:
            left_count += 1
            root_left = root_left.left
        while root_right.right is not None:
            right_count += 1
            root_right = root_right.right
        if left_count > right_count:
            return left_count
        else:
            return right_count


# Write your code here

T = int(input())
myTree = Solution()
root = None
for i in range(T):
    data = int(input())
    root = myTree.insert(root, data)
height = myTree.getHeight(root)
print(height)
