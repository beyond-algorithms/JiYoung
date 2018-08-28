import sys
sys.path.append('.')

from src.StdIOTestContainer import StdIOTestContainer as T


def calS(list, start, k):
    avg = 0
    for i in range(start, start + k):
        avg += list[i]
    avg = avg/k

    val = 0
    for i in range(start, start + k):
        val += pow((list[i]-avg), 2)
    val = val/k
    val = pow(val, 0.5)
    return val


"""
첫 번째 줄에 N과 K가 주어진다. N은 1 이상 500 이하의 정수이고, K는 1 이상 N 이하의 정수이다.

두 번째 줄에는 N개의 정수가 입력되며, 이는 인형이 일렬로 나열된 순서대로 인형을 선호하는 사람의 수이다.
각 수는 모두 106 이하의 음이 아닌 정수이다.
"""

def solve():
    NK = input().split(" ")
    N = int(NK[0])
    K = int(NK[1])


    numlist = [int(i) for i in input().split(" ")]
    candidate = []
    for i in range(N - K + 2):
        for j in range(K, N-i+1):
            can = calS(numlist, i, j)
            candidate.append(can)

    output = str(min(candidate))
    print(float((output[:13])))

    return 0


user_input = '''
10 3
1 4 1 5 9 2 6 5 3 5
'''

expected = '''
0.94280904158
'''

T.runningTest(user_input.strip(), expected.lstrip(), solve)