class Solution:
    def selfDividingNumbers(self, left, right):
        output = []
        for i in range(left, right+1):
            number = str(i)
            flag = 0
            for j in range(len(number)):
                if number[j] == "0" or not (i%int(number[j]) == 0):
                    flag = 1
                    break

            if flag == 0:
                output.append(i)
        return output

