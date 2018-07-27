import sys

sys.path.append('.')

from src.StdIOTestContainer import StdIOTestContainer as T

def solve():
    for _x in range(int(input())):
        spin = int(input())

        string = list(input())
        string.reverse()
        string.append(string[0])

        index = 1
        output = 0
        for z in range(spin):
            output += 1
            destination = list(input())

            b = list(string[index:])
            while not b == destination:
                string.append(string[index])
                index += 1
                b = list(string[index:])

            string = list(string[:index:-1])
            string.append(string[0])
            index = 1

        print(output)



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