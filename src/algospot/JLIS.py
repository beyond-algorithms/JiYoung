import sys

sys.path.append('.')

from src.StdIOTestContainer import StdIOTestContainer as T

def solve():
    for _x in range(int(input())):
        AB = input().split(" ")
        A = [int(i) for i in input().split(" ")]
        B = [int(i) for i in input().split(" ")]
        union = set(A)

        dup = []
        for i in range(len(B)):
            if not B[i] in union:
                union.add(B[i])
            else:
                dup.append(B[i])

        for i in range(int(AB[0])):


def make():
    pass



user_input = '''
3
3 3
1 2 4
3 4 7
3 3
1 2 3
4 5 6
5 3
10 20 30 1 2
10 20 30
'''

expected = '''
5
6
5
'''

T.runningTest(user_input.strip(), expected.lstrip(), solve)