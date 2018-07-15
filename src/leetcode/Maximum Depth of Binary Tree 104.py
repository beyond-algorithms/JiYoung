class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    ret = 0
    TreeQueue = []
    outputQ = []
    maxOutput = []

    def maxDepth(self, root):
        self.maxOutput = []
        self.TreeQueue = []
        self.outputQ = []
        if not root:
            return 0

        if not root.left and not root.right:
            return 1

        self.TreeQueue.insert(0, root)
        self.outputQ.insert(0, 1)
        self.depthRecursive()

        self.maxOutput.sort()
        return self.maxOutput[-1]




    def depthRecursive(self):
        tree = self.TreeQueue.pop()
        nowDepth = self.outputQ.pop()
        print(tree.val)
        if not tree.left and not tree.right:
            self.maxOutput.append(nowDepth)
            return 0

        if tree.left:
            self.TreeQueue.insert(0, tree.left)
            self.outputQ.insert(0, nowDepth + 1)
            self.depthRecursive()
        if tree.right:
            self.TreeQueue.insert(0, tree.right)
            self.outputQ.insert(0, nowDepth + 1)
            self.depthRecursive()

        return 0


T3 = TreeNode(1)
T3.left = TreeNode(2)
T3.right = None

ss1 = Solution()

print(ss1.maxDepth(T3))





