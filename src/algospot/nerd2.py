import sys

sys.path.append('.')

from src.StdIOTestContainer import StdIOTestContainer as T













def solve():
    repeat = int(input())

    for x in range(repeat):
        peopleNum = int(input())
        output = 0
        nowNumber = 0

        pqDict = {}
        for i in range(peopleNum):
            nowNumber += 1
            pq = input().split(" ")
            pqDict.update({pq[0]:pq[1]})
            keys = pqDict.keys()

            for j in keys:
                if pq[0] > j:
                    if pq[1] > pqDict.get(j):
                        nowNumber -= 1

            output += nowNumber

        print(output)





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