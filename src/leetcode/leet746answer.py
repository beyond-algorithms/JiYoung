class Solution:
    def minCostClimbingStairs(self, cost):
        n = len(cost)

        if n < 2:
            pass

        output = []
        for i in range(n):
            output.append(0)

        output[0] = cost[0]
        output[1] = cost[1]

        for i in range(2,n):
            output[i] = cost[i] + min(output[i-1], output[i-2])
        return min(output[n-2], output[n-1])
