
def josep(N, K):
    i = 0
    Kindex = -1
    while i < len(people): #죽이는 과정
        print(i, Kindex)
        if isdied[i] == True:
            print(i, "얜 이미죽음")
            i += 1
            continue

        Kindex += 1
        if Kindex % K == 0:  # 누구를 죽일까
            isdied[i] = True  # i번째 죽음]
            print(i, "죽음")


        i += 1
        if i == len(people):
            i = 0


        if isdied.count(False) == 2:
            break;


repeat = int(input())

for x in range(repeat):
    line = input().split(' ')
    isdied = [False for i in range(int(line[0]))]
    people = []
    for i in range(1, int(line[0])+1):
        people.append(i)

    josep(int(line[0]), int(line[1]))

    output = []
    for i in range(int(line[0])):
        if isdied[i] == False:
            output.append(people[i])

    print(output[0], output[1])



