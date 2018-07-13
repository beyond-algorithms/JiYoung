

class Solution:
    ret = 0
    TreeQueue = []
    outputQ = []
    maxOutput = []

    def maxDepth(self, root):
        if not root:
            return 0

        if not root.left and not root.right:
            return 1

        if root.left:
            self.TreeQueue.insert(0, root.left)
            self.outputQ.insert(0, 1)
            self.depthRecursive()

        if root.right:
            self.TreeQueue.insert(0, root.right)
            self.outputQ.insert(0, 1)
            self.depthRecursive()

        self.maxOutput.sort()
        return self.maxOutput[-1]

    def depthRecursive(self):
        nowDepth = self.outputQ.pop()
        tree = self.TreeQueue.pop()

        if not tree:
            self.maxOutput.append(nowDepth)
            return 0

        if not tree.left and not tree.right:
            self.maxOutput.append(nowDepth+1)
            return 0

        print(self.outputQ)
        self.TreeQueue.insert(0, tree.left)
        self.outputQ.insert(0, nowDepth + 1)
        self.depthRecursive()

        self.TreeQueue.insert(0, tree.right)
        self.outputQ.insert(0, nowDepth + 1)
        self.depthRecursive()

        return 0

    # 접근방법 : 개수세서 나눠버리기
    """
    트리의 노드수를 세는 메소드가 있는가? -> 없다
    모두순회하면 입력이 n 일때 n 시간소요 
    더 줄일수 있는가 -> 노드를 건너뛰는방법을 생각해야함
    
    그런거없음
    그냥 depthFirst 임
    
    선입선출, 선입후출
    """

