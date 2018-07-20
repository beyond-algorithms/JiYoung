import sys

sys.path.append('.')

from src.StdIOTestContainer import StdIOTestContainer as T

def solve():
    for _x in range(int(input())):
        NSJK = input().split(" ")
        line = input().split(" ")
        KInfo = [int(i) for i in line]

        output = 0

        page = int(NSJK[0])
        start = int(NSJK[1])
        jump = int(NSJK[2]) + 1
        while 1:
            if start in KInfo:
                output += 1

            start += jump

            if start > page:
                break

        print("#" + str(_x + 1), output)






user_input = '''
3
40 2 2 7
5 10 15 20 25 30 35
50 23 3 2
43 39
100 35 1 10
10 9 8 7 6 5 4 1 2 3
'''

expected = '''
#1 3
#2 2
#3 0
'''

T.runningTest(user_input.strip(), expected.lstrip(), solve)