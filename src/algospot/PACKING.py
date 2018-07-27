import sys
import queue
sys.path.append('.')

from src.StdIOTestContainer import StdIOTestContainer as T

"""
입력의 첫 줄에는 테스트 케이스의 수 C (1≤C≤50)가 주어집니다. 
각 테스트 케이스의 첫 줄에는 가져가고 싶은 물건의 수 N (1≤N≤100)과 캐리어의 용량 W (1≤W≤1000)가 주어집니다. 
그 이후 N줄에 순서대로 각 물건의 정보가 주어집니다. 
한 물건에 대한 정보는 물건의 이름, 부피, 절박도 순서대로 주어지며, 
이름은 공백 없는 알파벳 대소문자 1글자 이상 20글자 이하의 문자열, 
부피와 절박도는 1000 이하의 자연수입니다.
"""


def solve():
    for _x in range(int(input())):
        NW = input().split(" ")
        objectList = [[0, 0] for i in range(100)]
        objectDict = {}
        for N in range(int(NW[0])):
            information = input().split(" ")
            objectDict.update({N:information[0]})
            objectList[N][0] = information[1]
            objectList[N][1] = information[2]



def recursive(arr, index):
    pass



user_input = '''
2
6 10
laptop 4 7
camera 2 10
xbox 6 6
grinder 4 7
dumbell 2 5
encyclopedia 10 4
6 17
laptop 4 7
camera 2 10
xbox 6 6
grinder 4 7
dumbell 2 5
encyclopedia 10 4
'''

expected = '''
24 3
laptop
camera
grinder
30 4
laptop
camera
xbox
grinder
'''

T.runningTest(user_input.strip(), expected.lstrip(), solve)