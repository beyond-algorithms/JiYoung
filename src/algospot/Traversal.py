import sys
sys.path.append('.')

from src.StdIOTestContainer import StdIOTestContainer as T

class TreeNode:
    def __init__(self, value):
        self.val = value
        self.left = None
        self.right = None


def solve():
    



















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