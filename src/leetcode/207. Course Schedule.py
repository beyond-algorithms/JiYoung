class Solution:
    length = 0
    numOfCourse = 0
    flag=0
    def canFinish(self, numCourses, prerequisites):
        self.numOfCourse = numCourses
        self.length = len(prerequisites)
        checkedIndex = [[False for i in range(numCourses)] for i in range(numCourses)]
        indexSet = set(i for i in range(numCourses))
        graph = [[0 for i in range(numCourses)] for i in range(numCourses)]
        checkedSet = set()

        self.makeGraph(graph, prerequisites)
        stack = [0]

        self.flag = 0
        def dfs(stack):
            if self.flag:
                return False

            for i in range(self.numOfCourse):
                index = 0
                if len(stack) == 0:
                    index = indexSet.pop()
                else:
                    index = stack.pop()
                indexSet.remove(index)
                if checkedIndex[index] == False:
                    for j in range(self.length):
                        if graph[index][j] == 1:
                            if (index,j) in checkedSet:
                                self.flag = 1
                                break
                            stack.append(j)
                            checkedSet.add((index, j))
                            dfs(stack)
                    checkedIndex[index] = True
            if self.flag:
                return False
            else:
                return True

        if dfs(stack) == (False or None):
            return False
        else:
            return True


    def makeGraph(self, graph, list):
        for i in range(self.length):
            k = list[i]
            graph[k[0]][k[1]] = 1


    def findElement(self, list, n):
        for i in range(self.length):
            if list[i] == False:
                if list[i][1] == n:
                    return i
        return -1

    def findFalse(self, checkedIndex):
        for i in range(self.length):
            if checkedIndex[i] == False:
                return i

        return -1



s1 = Solution()

print(s1.canFinish(2, [[0,1],[1,0]]))




"""
def canFinish(self, numCourses, prerequisites):
    graph = [[] for _ in xrange(numCourses)]
    visit = [0 for _ in xrange(numCourses)]
    for x, y in prerequisites:
        graph[x].append(y)
    def dfs(i):
        if visit[i] == -1:
            return False
        if visit[i] == 1:
            return True
        visit[i] = -1
        for j in graph[i]:
            if not dfs(j):
                return False
        visit[i] = 1
        return True
    for i in xrange(numCourses):
        if not dfs(i):
            return False
    return True
"""