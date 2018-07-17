class Solution:
    five_dollar = 0
    ten_dollar = 0

    def lemonadeChange(self, bills):
        """
        :type bills: List[int]
        :rtype: bool
        """
        self.five_dollar = 0
        self.ten_dollar = 0

        for bill in bills:
            if bill == 5:
                self.five_dollar += 1
            elif bill == 10: #성공사례
                if self.five_dollar:
                    self.five_dollar -= 1
                    self.ten_dollar += 1
                else:
                    return False
            else:
                if self.ten_dollar:
                    if self.five_dollar: #성공사례
                        self.ten_dollar -= 1
                        self.five_dollar -= 1
                    else:
                        return False
                else:
                    if self.five_dollar >= 3: #성공사례
                        self.five_dollar -= 3
                    else:
                        return False
        return True

