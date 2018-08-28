import sys

sys.path.append('.')

from src.StdIOTestContainer import StdIOTestContainer as T



user_input = '''
2
5
72 50
57 67
74 55
64 60

5
1 5
2 4
3 3
4 2
5 1
'''

expected = '''
8
15
'''

T.runningTest(user_input.strip(), expected.lstrip(), solve)