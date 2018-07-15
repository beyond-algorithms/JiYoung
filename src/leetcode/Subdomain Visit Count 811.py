class Solution:
    set = {}
    dict = {}
    def subdomainVisits(self, cpdomains):
        """
        ["9001 discuss.leetcode.com"]
        :rtype: List[str]
        """
        self.set.clear()
        self.dict.clear()
        for cpdomain in cpdomains:
            numAndAddress = self.toNumberAndStr(cpdomain) #9001과 A.B.C로 분할
            element = self.toDotAndAddress(numAndAddress[1]) # a.b.c, b.c, c 로 분할
            for i in element:
                if i in self.dict.keys():
                    self.dict.update({i:self.dict.get(i) + int(numAndAddress[0])})
                else:
                    self.dict.update(({i:int(numAndAddress[0])}))

        output = []
        for key in self.dict.keys():
            output.append(str(self.dict.get(key)) + " " + str(key))
        return output


    def toNumberAndStr(self, domain):
        return domain.split(' ')

    def toDotAndAddress(self, address):
        list = []
        b = []
        list.append(address)
        for i in range(len(address.split("."))-1):
            list.append(list[-1].split(".",1)[-1])
        return list


#print(Solution.subdomainVisits(Solution, ["9001 discuss.leetcode.com"]))