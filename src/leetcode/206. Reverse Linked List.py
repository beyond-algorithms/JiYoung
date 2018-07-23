# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    def reverseList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """

        return self.recursive(head)

    def recursive(self, node, prev=None):
        if not node:
            return prev

        n = node.next
        node.next = prev
        return self.recursive(n, node)


# 1
# 1 2
# 1 2 3



