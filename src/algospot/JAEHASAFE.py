import sys

sys.path.append('.')

from src.StdIOTestContainer import StdIOTestContainer as T


length = 0
def solve():
    for _x in range(int(input())):
        spin = int(input())

        string = list(input())
        length = len(string)

        index = 1
        output = 0
        for z in range(spin):
            shift = 0
            destination = list(input())
            string_parameter = list(string)
            if z%2 == 0:
                shift = getShiftNumberClockWise(string_parameter, destination)
                string = string[length - shift:] + string[:length-shift]
            else:
                shift = getShiftNumberCounterClockWise(string_parameter, destination)
                string = string[shift:] + string[:shift]



            output += shift
        print(output)





def getShiftNumberClockWise(start_list, finish_str):
    count = 0
    index = -1

    while 1:
        count += 1
        start_list.insert(0, start_list[index])

        newstr = start_list[:length+index]
        if newstr == finish_str:
            break

        index -= 1

    return count

def getShiftNumberCounterClockWise(start_list, finish_str):
    count = 0
    index = 1

    while 1:
        count += 1
        start_list.append(start_list[index-1])

        newstr = start_list[index:]
        if newstr == finish_str:
            break

        index += 1

    return count





user_input = '''
2
3
abbab
babab
ababb
bbaba
2
RMDCMRCD
MRCDRMDC
DCMRCDRM
'''

expected = '''
6
10
'''

T.runningTest(user_input.strip(), expected.lstrip(), solve)