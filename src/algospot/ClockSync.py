import sys

sys.path.append('.')

from src.StdIOTestContainer import StdIOTestContainer as T

"""
0:3번  1:2번  2:3번
4:5번  5:4번  6:2번
7:4번  8:1번  9:2번
10:1번  11:1번  12:1번
13:1번  14:4번  15:4번
"""
num = [[1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
       [0, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0],
       [0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1],
       [1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0],
       [0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1, 0, 1, 0, 0, 0],
       [1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1],
       [0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1],
       [0, 0, 0, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1],
       [1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
       [0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0]]
switchNum = [[0,1,2], [3,7,9,11], [4,10,14,15],
             [0,4,5,6,7], [6,7,8,10,12], [0,2,14,15],
             [3,14,15], [4,5,7,14,15], [1,2,3,4,5],
             [3,4,5,9,13]]
def solve():
    for _x in range(int(input())):
        readline = input().split(" ")
        clock = [int(i) for i in readline]
        is12 = [False for i in range(16)]
        numOfFalsePerSwitch = [0 for i in range(16)]

        for switch in range(10):
            count = 0
            for block in switch:
                if is12[block] == False:
                    count += 1
            numOfFalsePerSwitch[switch] = count

        nextPush = max(numOfFalsePerSwitch)


def recursive(arr44, push):
    if arr44.count(12) == 16:
        return push




user_input = '''
2
5
72 50
57 67
74 55
64 60

5
1 5
2 4
3 3
4 2
5 1
'''

expected = '''
8
15
'''

T.runningTest(user_input.strip(), expected.lstrip(), solve)