import sys
import math
sys.path.append('.')

from src.StdIOTestContainer import StdIOTestContainer as T
"""
맨 처음 테스트 케이스의 개수 T(<=40)가 주어지며 그 다음 T개의 테스트 케이스가 주어진다. 
각 테스트 케이스는 첫 번째 줄에는 고객의 수 N(1 ≤ N ≤ 10000) 과 최소 상담시간 K(1 ≤ K ≤ 30), 
수진이의 근무시간 L(1 ≤ L ≤ 1000000)이 공백을 두고 주어진다.
 다음 N개의 줄에 걸쳐 고객의 정보가 주어진다.
 각 줄은 고객이 원하는 상담시간 S(K ≤ S ≤ 100)와 
상담시간이 1분 부족할 때마다 늘어나는 불만족지수 Q(1≤ Q ≤ 3)가 공백을 두고 주어진다.
"""
# 무조건 디피
def solve():
    for _x in range(int(input())):
        NKL = input().split(" ")
        N_People = int(NKL[0]) # 사람수
        K_minTime = int(NKL[1]) # 최소상담시간
        L_totalTime = int(NKL[2]) # 근무시간


        SQList = []

        for i in range(N_People):
            SQ = input().split(" ")
            SQList.append(SQ)









user_input = '''
1
8 5 30
19 1
12 2
6 1
13 1
8 3
15 2
11 2
7 1

'''

expected = '''
#1 23
'''

T.runningTest(user_input.strip(), expected.lstrip(), solve)