class Solution:
    length = 0
    def reconstructQueue(self, people):
        """
        :type people: List[List[int]]
        :rtype: List[List[int]]
        """
        if len(people)==0:
            return []
        people.sort()
        tallest = people[-1][0]

        talldesc = [[people[-1]]]

        for i in people[-2::-1]:
            if talldesc == [[]]:
                talldesc[-1].insert(0, i)
            if not i[0] == talldesc[-1][0][0]:
                talldesc.append([])
            talldesc[-1].insert(0,i)

        output = list(talldesc[0])
        for i in range(1, len(talldesc)):
            for j in talldesc[i]:
                output.insert(j[1], j)

        return output


s1 = Solution()

s1.reconstructQueue([[7,0], [4,4], [7,1], [5,0], [6,1], [5,2]])