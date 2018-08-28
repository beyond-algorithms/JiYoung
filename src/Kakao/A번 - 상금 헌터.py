import sys

sys.path.append('.')

from src.StdIOTestContainer import StdIOTestContainer as T


def solve():
    money1 = [100000, 300000, 500000, 2000000, 3000000, 5000000]
    money2 = [320000, 640000, 1280000, 2560000, 5120000]
    festival1 = [21, 15, 10, 6, 3, 1]
    festival2 = [31, 15, 7, 3, 1]
    for i in range(int(input())):
        ab = input().split()
        a = int(ab[0])
        b = int(ab[1])

        first = 0
        second = 0
        for i in range(0, 5):
            if a == 1:
                first = money1[-1]
                break
            if a > festival1[0] or a == 0:
                break
            elif a <= festival1[i]:
                if a > festival1[i+1]:
                    first = money1[i]
                    break
        for i in range(0,4):
            if b == 1:
                second = money2[-1]
            if b > festival2[0] or b == 0:
                break
            elif b <= festival2[i]:
                if b > festival2[i+1]:
                    second = money2[i]
                    break
        print(first+second)

#solve()

user_input = '''
6
8 4
13 19
8 10
18 18
8 25
13 16
'''

expected = '''
1780000
620000
1140000
420000
820000
620000
'''

T.runningTest(user_input.strip(), expected.lstrip(), solve)