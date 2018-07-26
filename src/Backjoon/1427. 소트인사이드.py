number = input()

numlist = list(number)

numlist.sort()

a = ""
j=1
for i in range(len(numlist)):
    a += numlist[-1*j]
    j += 1

print(a)