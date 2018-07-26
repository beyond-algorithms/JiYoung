voca_list = [[] for z in range(50)]
size = [0 for x in range(50)]
totalset = set()
for _x in range(int(input())):
    voca = input()

    if voca in totalset:
        continue

    length = len(voca)
    totalset.add(voca)

    voca_list[length].append(voca)
    size[length] += 1

for i in range(50):
    voca_list[i].sort()
    for j in range(size[i]):
        print(voca_list[i][0])
        voca_list[i].remove(voca_list[i][0])