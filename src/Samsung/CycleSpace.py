import sys

sys.path.append('.')

from src.StdIOTestContainer import StdIOTestContainer as T


def solve():
    for repeat in range(int(input())):
        outRow = -1
        outCol = -1

        inputArr = input().split(" ") #N_M_R1_C1_R2_C2
        N = int(inputArr[0])
        M = int(inputArr[1])
        R1 = int(inputArr[2])
        C1 = int(inputArr[3])
        R2 = int(inputArr[4])
        C2 = int(inputArr[5])

        row = abs(R1 - R2)
        jump_row = -1
        if R1 < R2:
            jump_row = N - R2 + R1
        else:
            jump_row = N - R1 + R2

        if jump_row > row:
            outRow = row
        else:
            outRow = jump_row


        col = abs(C1 - C2)
        jump_col = -1
        if C1 < C2:
            jump_col = M - C2 + C1
        else:
            jump_col = M - C1 + C2

        if jump_col > col:
            outCol = col
        else:
            outCol = jump_col

        print("#" + str(repeat + 1), outRow + outCol)




user_input = '''
3
3 3 0 0 2 2
4 6 3 4 2 0
394 549 254 477 15 414
'''

expected = '''
#1 2
#2 3
#3 218
'''

T.runningTest(user_input.strip(), expected.lstrip(), solve)