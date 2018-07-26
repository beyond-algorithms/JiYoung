

dp = [[-1,-1] for i in range(41) ]
dp[0] = [1,0]
dp[1] = [0,1]

for i in range(2,41):
    dp[i][0] = dp[i-2][0] + dp[i-1][0]
    dp[i][1] = dp[i-2][1] + dp[i-1][1]

for _x in range(int(input())):

    number = int(input())

    print(dp[number][0], dp[number][1])


