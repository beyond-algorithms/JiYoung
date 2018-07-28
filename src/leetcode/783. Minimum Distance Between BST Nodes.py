# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None
        #왼중오

class Solution:
    output = []
    valOfNode = []

    def minDiffInBST(self, root):
        self.valOfNode = []
        self.recursive(root)
        output = []
        for i in range(len(self.valOfNode)):
            for j in range(i+1, len(self.valOfNode)):
                output.append(abs(self.valOfNode[i] - self.valOfNode[j]))
        return min(output)

    def recursive(self, node):
        if not node.left and not node.right:
            self.valOfNode.append(node.val)
            return 0

        self.valOfNode.append(node.val)

        if node.left:
            self.recursive(node.left)
        if node.right:
            self.recursive(node.right)

    def minDiffInBST2(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        self.output = []
        if root.left:
            self.recursive(root, root.left)
        if root.right:
            self.recursive(root, root.right)

        return min(self.output)

    def recursive2(self, root, node):
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

#[90,69,null,49,89,null,52,null,null,null,null]

s1 = TreeNode(90)
s2 = TreeNode(69)
s3 = TreeNode(49)
s4 = TreeNode(89)
s5 = TreeNode(52)

s3.right = s5
s2.right = s4
s2.left = s3
s1.left = s2

print(q1.minDiffInBST(s1))