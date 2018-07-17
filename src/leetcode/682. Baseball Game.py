import sys
sys.path.append('.')

from src.StdIOTestContainer import StdIOTestContainer as T

class Solution:

    output = 0
    point_List = []

    def calPoints(self, ops):
        """
        :type ops: List[str]
        :rtype: int
        """
        self.output = 0
        self.point_List = []

        for i in ops:
            self.notInteger(i)

        return self.output




    def notInteger(self, char):
        if char == "C":
            self.output -= self.point_List.pop()
        elif char == "D":
            dPoint = self.point_List[-1]*2
            self.output += dPoint
            self.point_List.append((dPoint))
        elif char == "+":
            pPoint = self.point_List[-1] + self.point_List[-2]
            self.output += pPoint
            self.point_List.append(pPoint)
        else:
            self.point_List.append(int(char))
            self.output += int(char)





s1 = Solution()

s1.calPoints(["5","-2","4","C","D","9","+","+"])
