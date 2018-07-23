class Solution:
    def hammingDistance(self, x, y):
        """
        :type x: int
        :type y: int
        :rtype: int
        """
        binary = bin(x ^ y)

        output = binary.count("1")

        print(output)
        return output