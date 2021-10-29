# Smallest Missing Genetic Value in Each Subtree

# There is a family tree rooted at 0 consisting of n nodes numbered 0 to n - 1. You are given a 0-indexed integer array parents, where parents[i] is the parent for node i. Since node 0 is the root, parents[0] == -1.

# There are 105 genetic values, each represented by an integer in the inclusive range [1, 105]. You are given a 0-indexed integer array nums, where nums[i] is a distinct genetic value for node i.

# Return an array ans of length n where ans[i] is the smallest genetic value that is missing from the subtree rooted at node i.

# The subtree rooted at a node x contains node x and all of its descendant nodes.

# Example 1:
# Input: parents = [-1,0,0,2], nums = [1,2,3,4]
# Output: [5,1,1,1]
# Explanation: The answer for each subtree is calculated as follows:
# - 0: The subtree contains nodes [0,1,2,3] with values [1,2,3,4]. 5 is the smallest missing value.
# - 1: The subtree contains only node 1 with value 2. 1 is the smallest missing value.
# - 2: The subtree contains nodes [2,3] with values [3,4]. 1 is the smallest missing value.
# - 3: The subtree contains only node 3 with value 4. 1 is the smallest missing value.

# Question Link: https://leetcode.com/problems/smallest-missing-genetic-value-in-each-subtree/

def smallestMissingValueSubtree(self, parents, nums):
        n = len(parents)
        res = [1] * n
        seen = [0] * 100010
        if 1 not in nums:
            return res
        children = [[] for i in xrange(n)]
        for i in xrange(1, n):
            children[parents[i]].append(i)

        def dfs(i):
            if seen[nums[i]] == 0:
                for j in children[i]:
                    dfs(j)
                seen[nums[i]] = 1

        i = nums.index(1)
        miss = 1
        while i >= 0:
            dfs(i)
            while seen[miss]:
                miss += 1
            res[i] = miss
            i = parents[i]
        return res
