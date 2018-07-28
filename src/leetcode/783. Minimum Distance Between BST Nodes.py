# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None
        #왼중오

class Solution:
    output = []

    def minDiffInBST(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if root.left:
            self.recursive(root, root.left)
        if root.right:
            self.recursive(root, root.right)

        return min(self.output)

    def recursive(self, root, node):
        if not node.left and not node.right:
            self.output.append(abs(root.val - node.val))
            return 0

        self.output.append(abs(root.val - node.val))

        if node.left:
            self.recursive(node, node.left)
        if node.right:
            self.recursive(node, node.right)


q1 = Solution()

s1 = TreeNode(27)
s2 = TreeNode(34)
s3 = TreeNode(58)
s4 = TreeNode(50)
s5 = TreeNode(44)

s4.left = s5
s3.left = s4
s2.right = s3
s1.right = s2

print(q1.minDiffInBST(s1))