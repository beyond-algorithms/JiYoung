
def josep(N, K):
    i = 0
    Kindex = -1
    j=0
    while 1: #죽이는 과정
        j += 1
        print(j)
        if isdied[i] == True:
            i += 1
            if i == N:
                i = 0
            continue

        Kindex += 1
        if Kindex % K == 0:  # 누구를 죽일까
            isdied[i] = True  # i번째 죽음]

        i += 1
        if i == N:
            i = 0

        if isdied.count(False) == 2:
            break;


repeat = int(input())

for x in range(repeat):
    line = input().split(' ')
    isdied = []
    people = []
    for i in range(1, int(line[0])+1):
        people.append(i)
        isdied.append(False)
    josep(int(line[0]), int(line[1]))

    output = []
    for i in range(int(line[0])):
        if isdied[i] == False:
            output.append(people[i])

    print(output[0], output[1])



