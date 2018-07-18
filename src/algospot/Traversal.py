import sys
sys.path.append('.')

from src.StdIOTestContainer import StdIOTestContainer as T

class TreeNode:
    def __init__(self, value):
        self.val = value
        self.left = None
        self.right = None


def slice(tree, start, finish):
    return list(tree[start:finish])

def solve():
    repeat = int(input())

    for x in range(repeat):
        num_of_node = int(input())
        preorder = input().split(" ")
        inorder = input().split(" ")

        printPostOrder(preorder, inorder)
        print()

def printPostOrder(preTree, inorderTree):
    length = len(preTree)
    if length == 0:
        return 0

    root = preTree[0]

    left = inorderTree.index(root)
    # right = length - left - 1

    printPostOrder(slice(preTree, 1, left + 1), slice(inorderTree, 0, left))
    printPostOrder(slice(preTree, left + 1, length), slice(inorderTree, left + 1, length))

    print(root, end=' ')


solve()

user_input = '''
2
7
27 16 9 12 54 36 72
9 12 16 27 36 54 72
6
409 479 10 838 150 441
409 10 479 150 838 441
'''

expected = '''
12 9 16 36 72 54 27
10 150 441 838 479 409
'''

T.runningTest(user_input.strip(), expected.lstrip(), solve)