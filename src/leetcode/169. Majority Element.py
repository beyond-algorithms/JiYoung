class Solution:
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """

        uniqueNum = set(nums)
        length = int(len(nums)/2)
        output = -1
        for item in uniqueNum:
            if nums.count(item) > length:
                output = item
                break
        return output