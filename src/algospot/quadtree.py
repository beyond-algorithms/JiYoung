#검사하자
def solve(outstr):
    print(outstr[0])
    outstr = outstr[1:]
    if outstr[0] == "b" or outstr[0] == "w":
        return outstr[0]



    upleft = solve(outstr)
    upright = solve(outstr)
    downleft = solve(outstr)
    downright = solve(outstr)


    return "x" + downleft + downright + upleft + upright

outstr2 = "xbwwb"

print(solve(outstr2))
