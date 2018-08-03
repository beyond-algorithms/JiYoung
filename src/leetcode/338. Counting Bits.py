class Solution:
    def countBits(self, num):
        """
        :type num: int
        :rtype: List[int]
        """
        output = []
        for i in range(num+1):
            a = bin(i).count("1")
            output.append(a)

        return output


    """    
    class Solution:
    def countBits(self, num):
        res=[0]
        while len(res)<=num:
            res+=[i+1 for i in res]
        return res[:num+1]
        """