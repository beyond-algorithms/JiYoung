class Solution:
    def judgeCircle(self, moves):
        up = 0
        down = 0
        left = 0
        right = 0

        for str in moves:
            if str == "U":
                up += 1
            if str == "D":
                down += 1
            if str == "L":
                left += 1
            if str == "R":
                right += 1

        if up == down and left == right:
            return True

        return False
