alphabet = ["a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"]
bigAlphabet = ["A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"]

class Solution:
    output = set()
    length = 0

    def letterCasePermutation(self, S):
        self.output = set()
        self.length = len(S)
        self.output.add(S)
        S = S.lower()
        self.letters(S, 0)

        return list(self.output)

    def letters(self, S, idx):
        if idx >= self.length:
            return 0
        self.output.add(S)
        if S[idx] in alphabet:
            letter = S[idx].upper()
            newStr = S[:idx] + letter + (S[idx+1:] if not idx + 1 == self.length else "")
            self.output.add(newStr)
            self.letters(newStr, idx + 1)

        self.letters(S, idx + 1)














    def letterCasePermutation2(self, S):
        """
        :type S: str
        :rtype: List[str]
        """
        self.recursiveList = []
        self.recursiveList.append(S)
        for i in range(len(S)):
            ascii = ord(S[i])
            if ascii >= 97 and ascii <= 122:
                newStr = S
                big = chr(ascii - 32)
                newStr = newStr.replace(S[i], big , 1)
                if not newStr in self.recursiveList:
                    self.recursiveList.append(newStr)
                self.letterRecursive(newStr)
            elif ascii >= 65 and ascii <= 90:
                newStr = S
                small = chr(ascii + 32)
                newStr = newStr.replace(S[i], small , 1)
                if not newStr in self.recursiveList:
                    self.recursiveList.append(newStr)
                self.letterRecursive(newStr)
        return self.recursiveList


    def letterRecursive(self, S):
        for i in range(len(S)):
            ascii = ord(S[i])
            if ascii >= 97 and ascii <= 122:
                newStr = S
                big = chr(ascii - 32)
                newStr = newStr.replace(S[i], big, 1)
                if not newStr in self.recursiveList:
                    self.recursiveList.append(newStr)
                    self.letterRecursive(newStr)
            elif ascii >= 65 and ascii <= 90:
                newStr = S
                small = chr(ascii + 32)
                newStr = newStr.replace(S[i], small , 1)
                if not newStr in self.recursiveList:
                    self.recursiveList.append(newStr)
                self.letterRecursive(newStr)



s1 = Solution()

#print(s1.letterCasePermutation("a1b2"))
print(s1.letterCasePermutation("RmR"))
#print(s1.letterCasePermutation("LzYracpd"))
