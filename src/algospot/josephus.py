
def josep(N, K):
    i = 0
    Kindex = -1
    length = len(people)
    j=0
    while length > 2: #죽이는 과정
        j += 1
        print(j)
        Kindex += 1
        if Kindex % K == 0:  # 누구를 죽일까  # i번째 죽이고 리스트에서 삭제
            people.pop(i)
            length -= 1
            i -= 1

        i += 1
        if i >= length:
            i = 0


repeat = int(input())
people = []
for x in range(repeat):
    line = input().split(' ')
    people = []
    for i in range(1, int(line[0])+1):
        people.append(i)
    josep(int(line[0]), int(line[1]))

    print(people[0], people[1])



