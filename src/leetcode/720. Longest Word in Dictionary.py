import heapq as hq

class Solution:
    def longestWord(self, words):
        """
        :type words: List[str]
        :rtype: str
        """
        length = len(words)

        words.sort()
        print(words)
        first = ""
        for i in range(length):
            first = hq.heappop(words)
            if len(first) == 1:
                break

        outputCandidate = []
        while len(words) > 0:
            second = hq.heappop(words)
            if first in second and len(second) == len(first)+1:

                outputCandidate.append(second)
                print(outputCandidate)
                first = second

            if len(second) == 1:
                first = second

        if len(outputCandidate) == 0:
            return ""

        output = []
        maxLength = -1
        for i in outputCandidate:
            strlen = len(i)
            if maxLength < strlen:
                maxLength = strlen

        for i in outputCandidate:
            if len(i) == maxLength:
                output.append(i)
        output.sort()

        return output[0]


s1 = Solution()

#print(s1.longestWord(["w","wo","wor","worl","world"]))

print()
#print(s1.longestWord(["m","mo","moc","moch","mocha","l","la","lat","latt","latte","c","ca","cat"]))

print()
#print(s1.longestWord(["b","br","bre","brea","break","breakf","breakfa","breakfas","breakfast","l","lu","lun","lunc","lunch","d","di","din","dinn","dinne","dinner"]))

#print(s1.longestWord(["ogz","eyj","e","ey","hmn","v","hm","ogznkb","ogzn","hmnm","eyjuo","vuq","ogznk","og","eyjuoi","d"]))

#print(s1.longestWord(["yo","ew","fc","zrc","yodn","fcm","qm","qmo","fcmz","z","ewq","yod","ewqz","y"]))

#print(s1.longestWord(["k","lg","it","oidd","oid","oiddm","kfk","y","mw","kf","l","o","mwaqz","oi","ych","m","mwa"]))

#print(s1.longestWord(["ts","e","x","pbhj","opto","xhigy","erikz","pbh","opt","erikzb","eri","erik","xlye","xhig","optoj","optoje","xly","pb","xhi","x","o"]))

print(s1.longestWord(["rac","rs","ra","on","r","otif","o","onpdu","rsf","rs","ot","oti","racy","onpd"]))