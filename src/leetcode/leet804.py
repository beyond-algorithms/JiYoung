

class Solution:
    def uniqueMorseRepresentations(self, words):
        alphabet = { "a":".-", "b":"-...", "c":"-.-.","d":"-..","e":".","f":"..-.","g":"--.","h":"....","i":"..","j":".---","k":"-.-","l":".-..","m":"--","n":"-.","o":"---","p":".--.","q":"--.-","r":".-.","s":"...","t":"-","u":"..-","v":"...-","w":".--","x":"-..-","y":"-.--","z":"--.."}

        if len(words) == 0:
            return 0
        if len(words) == 1:
            return 1
        storeArr = []
        for i in range(len(words)):
            str = ""

            for j in range(len(words[i])):
                str += alphabet[words[i][j]]

            storeArr.append(str)


        #스택에넣는걸로해야겠다
        output = []
        #리스트검색으로 해야겠다
        for i in range(len(storeArr)):
            if not storeArr[i] in output:
                output.append(storeArr[i])

        return len(output)
