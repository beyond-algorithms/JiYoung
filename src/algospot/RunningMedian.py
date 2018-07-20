import sys
sys.path.append('.')

from src.StdIOTestContainer import StdIOTestContainer as T

number_list = []
length = 0

def solve():
    repeat = int(input())

    for _x in range(repeat):
        line = input().split(" ")

        number_list = []
        number_list.append(1983)
        length = 1
        output = 1983

        for i in range(1, int(line[0]) + 1):
            number = (number_list[i-1] * int(line[1]) + int(line[2])) % 20090711
            idx = find_binary_index(number)

            number_list.insert(idx, number)
            length += 1

            if length % 2:
                output += number_list[length/2]
            else:
                output += number_list[length/2 - 1]

        print(output)






def find_binary_index(num, start, finish):
    #기저사례
    if finish < start:
        return -1

    #재귀

    half = int((start + finish)/2)
    if number_list[half] < num:
        return find_binary_index(num, half + 1, finish)
    elif number_list[half] > num:
        return find_binary_index(num, start, half - 1)
    else:
        return half














user_input = '''
3
10 1 0
10 1 1
10000 1273 4936
'''

expected = '''
19830
19850
2448920
'''

T.runningTest(user_input.strip(), expected.lstrip(), solve)
