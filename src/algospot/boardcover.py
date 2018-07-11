import sys
sys.path.append('.')

from src.StdIOTestContainer import StdIOTestContainer as T



coverType = [ [[0,0], [1,0], [0,1]],
              [[0,0], [0,1], [1,1]],
              [[0,0], [0,1], [1,1]],
              [[0,0], [1,0], [1,-1]] ]

def set(board, y, x, type, delta):
    ok = True

    for i in range(1, 3):
        ny = y + coverType[type][i][0]
        nx = x + coverType[type][i][1]

        if ny < 0 or ny >= len(board) or nx < 0 or nx >= len(board[0]):
            ok = False
        board[ny][nx] += delta
        if board[ny][nx] > 1:
            ok= False

    return ok

def cover(board):
    y = -1
    x = -1

    for i in range(1, len(board)):
        for j in range(1, len(board[i])):
            if board[i][j] == 0:
                y = i
                x = j
                break
        if not y == -1:
            break

    if y== -1:
        return 1
    ret = 0
    for type in range(1,4):
        if set(board, y, x, type, 1):
            ret += cover(board)
        set(board, y, x, type, -1)

    return ret

def solve():
    repeat = int(input().strip())
    for z in range(repeat):
        line = input().split(' ')
        readboard = []
        for i in range(int(line[0])):
            temp = input()
            readboard.append([])
            for j in range(int(line[1])):
                if temp[j] == "#":
                    readboard[i].append(1)
                else:
                    readboard[i].append(0)

        a = cover(readboard)

        print(a)





user_input = '''
3
2 1
0 1
4 6
0 1 1 2 2 3 3 0 0 2 1 3
6 10
0 1 0 2 1 2 1 3 1 4 2 3 2 4 3 4 3 5 4 5
'''

expected = '''
1
3
4
0
'''

T.runningTest(user_input.strip(), expected.lstrip(), solve)
