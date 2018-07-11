import sys
sys.path.append('.')

from src.StdIOTestContainer import StdIOTestContainer as T


def solve():
    t = int(input().strip())

    for _ in range(t):
        print('Hello Algospot!')

user_input = '''
2
'''

expected = '''
Hello Algospot!
Hello Algospot!
'''

T.runningTest(user_input.strip(), expected.lstrip(), solve)
