def braket(xstr):
    arr = []
    for i in range(len(xstr)):
        if xstr[i] in "{([":
            arr.append(xstr[i])
        else:
            if len(arr) == 0:
                print("NO")
                return 0
            compare = arr.pop()
            if xstr[i] == ")":
                if not compare == "(":
                    print("NO")
                    return 0
            elif xstr[i] == "]":
                if not compare == "[":
                    print("NO")
                    return 0
            elif xstr[i] == "}":
                if not compare == "{":
                    print("NO")
                    return 0
    if len(arr) == 0:
        print("YES")
    else:
        print("NO")
    return 0


repeat = int(input())

for x in range(repeat):
    line = input()
    braket(line)
