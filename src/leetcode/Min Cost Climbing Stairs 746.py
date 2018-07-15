class Solution:
    def minCostClimbingStairs(self, cost):
        output = []

        if len(cost) == 0:
            return 0
        if len(cost) == 1:
            return cost[0]


        output.append(cost[0])
        idx = 1
        outputidx = 1
        while idx < len(cost)-1:
            output.append(min((output[outputidx-1] + cost[idx]), (output[outputidx-1] + cost[idx+1])))
            if cost[idx] >= cost[idx+1]:
                idx += 1
            idx += 1
            outputidx += 1

        temp1 = output[-1]

        output = []
        output.append(cost[1])
        idx = 2
        outputidx = 1
        while idx < len(cost)-1:
            output.append(min((output[outputidx-1] + cost[idx]), (output[outputidx-1] + cost[idx+1])))
            if cost[idx] >= cost[idx+1]:
                idx += 1
            idx += 1
            outputidx += 1

        return min(output[-1], temp1)



print(Solution.minCostClimbingStairs(Solution, [0,1,1,2]))