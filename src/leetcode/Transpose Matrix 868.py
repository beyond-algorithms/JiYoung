class Solution:
    def transpose(self, A):
        output = []
        for i in range(len(A[0])):
            output.append([])

        for arr in range(len(A)):
            idx = 0
            for element in A[arr]:
                output[idx].append(element)
                idx += 1

        return output

