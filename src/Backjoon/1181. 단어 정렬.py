import sys

sys.path.append('.')

from src.StdIOTestContainer import StdIOTestContainer as T

import heapq as HQ

def solve2():
    voca_list = [[] for i in range(50)]
    size = [0 for i in range(50)]
    totalset = set()
    for _x in range(int(input())):
        voca = input()

        length = len(voca)
        if voca in totalset:
            continue
        totalset.add(voca)
        if not len(voca_list[length]):
            HQ.heappush(voca_list[length], voca)
            size[length] += 1

        else:
            HQ.heappush(voca_list[length], voca)
            size[length] += 1

    for i in range(50):
        for j in range(size[i]):
            p = HQ.heappop(voca_list[i])
            print(p)


def solve():
    voca_list = [[] for z in range(51)]
    size = [0 for x in range(51)]
    totalset = set()
    for _x in range(int(input())):
        voca = input()

        if voca in totalset:
            continue

        length = len(voca)
        totalset.add(voca)

        voca_list[length].append(voca)
        size[length] += 1

    for i in range(51):
        voca_list[i].sort()
        for j in range(size[i]):
            print(voca_list[i][0])
            voca_list[i].remove(voca_list[i][0])

solve()
user_input = '''
13
but
i
wont
hesitate
no
more
no
more
it
cannot
wait
im
yours
'''

expected = '''
i
im
it
no
but
more
wait
wont
yours
cannot
hesitate
'''

#T.runningTest(user_input.strip(), expected.lstrip(), solve)
