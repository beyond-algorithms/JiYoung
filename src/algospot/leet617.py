class Solution:
    def mergeTrees(self, t1, t2):
        """
        :type t1: TreeNode
        :type t2: TreeNode
        :rtype: TreeNode
        """
        if not t1 and not t2:
            return None

        if not t1 and t2:
            return t2
        if t1 and not t2:
            return t1

        output = TreeNode(t1.val + t2.val)
        output.left = self.mergeTrees(t1.left, t2.left)
        output.right = self.mergeTrees(t1.right, t2.right)

        return output



class TreeNode:
    left = None
    right = None
    def __init__(self, n):
        pass