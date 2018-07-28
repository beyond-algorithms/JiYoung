class Solution:
    def findCircleNum(self, M):
        """
        :type M: List[List[int]]
        :rtype: int
        """ #깊이우선
        length = len(M)
        Checked = [False for i in range(length)]
        indexOfCircle = {}
        stack = []
        index = 0

        stack.append(0)
        indexOfCircle.update({0:index})
        index += 1
        Checked[0] = True

        nownum = -1
        for i in range(length):
            if len(stack) == 0:
                nownum = Checked.index(False)
                Checked[nownum] = True
                indexOfCircle.update({nownum:index})
                index += 1
            else:
                nownum = stack.pop()

            for col in range(length):
                if Checked[col] == False:
                    if M[nownum][col] == 1:

                        Checked[col] = True
                        stack.append(col)

                        where = indexOfCircle.get(nownum)

                        indexOfCircle.update({col:where})

        output = set(indexOfCircle.values())
        return len(output)