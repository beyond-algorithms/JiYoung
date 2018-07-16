class Solution:

    def numJewelSInStones(self, J, S):
        jewel = list(J)
        stone = list(S)

        k = 0
        for i in range(len(jewel)):
            for j in range(len(stone)):
                if jewel[i] ==  stone[j]:
                    k += 1


        return k
