import sys

sys.path.append('.')

from src.StdIOTestContainer import StdIOTestContainer as T
"""
N은 10 이하의 자연수이다.
지도의 정보에서 불모지는 0, 물은 1, 산은 2, 초원은 3로 표현된다.
지도 바깥 구역은 고려하지 않는다.
수도를 건설하는 위치에 있는 정보도 도시를 세우기 적합한 장소를 계산할 때 포함된다. 즉 불모지 위에 도시를 건설할 수 없다. 단 물 위에는 도시를 건설하는 것이 가능하다.
"""
blocks = [[-1,-1], [-1,0], [-1,1],
         [0,-1], [0,0], [0,1],
         [1,-1], [1,0], [1,1]]


def solve():
    for _x in range(int(input())):
        size = int(input())
        output = 0
        boardArr = []

        for i in range(size):
            arr = input().split(" ")
            boardArr.append([])
            for j in range(size):
                boardArr[i].append(int(arr[j]))
        for i in range(size):
            for j in range(size):
                if isCapital(i, j, boardArr, size):
                    output += 1


        print("#" + str(_x + 1), output)



def isCapital(i, j, board, size):
    if board[i][j] == 0:
        return False
    local123 = []
    for block in range(9):
        row = i + blocks[block][0]
        col = j + blocks[block][1]
        if row < 0 or col < 0 or row >= size or col >= size:
            continue

        if board[row][col] == 0:
            return False

        local123.append(board[row][col])

    if local123.count(1) == 0 or local123.count(2) == 0 or local123.count(3) == 0:
        return False
    return True







user_input = '''
2
5
0 1 1 2 1
3 2 1 3 2
2 1 3 1 0
0 1 2 2 3 
0 0 1 1 1
5
1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
2 2 2 2 2
1 1 1 1 1
'''

expected = '''
#1 7
#2 10
'''

T.runningTest(user_input.strip(), expected.lstrip(), solve)