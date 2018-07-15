class Solution:
    def reverseString(self, s):
        """
        :type s: str
        :rtype: str
        """
        b = ""
        for i in range(1, len(s) + 1):
            b += s[-1 * i]

        return b