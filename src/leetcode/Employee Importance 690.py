
# Employee info
class Employee:
    def __init__(self, id, importance, subordinates):
        # It's the unique id of each node.
        # unique id of this employee
        self.id = id
        # the importance value of this employee
        self.importance = importance
        # the id of direct subordinates
        self.subordinates = subordinates

class Solution:
    dict_id_index = {}

    def getImportance(self, employees, id):
        self.dict_id_index = {}

        for i in range(len(employees)):
            self.dict_id_index.update({employees[i].id:i})
        idx = self.dict_id_index.get(id)
        ret = 0
        if employees[idx].subordinates:
            for i in employees[idx].subordinates:
                ret += self.importancecRecursive(employees, i)
        return employees[idx].importance + ret

    def importancecRecursive(self, employees, id):
        idx = self.dict_id_index.get(id)
        ret = 0
        if not len(employees[idx].subordinates) == 0:
            for i in employees[idx].subordinates:
                ret += self.importancecRecursive(employees, i)
        return employees[idx].importance + ret







    def getImportance2(self, employees, id):
        idx = self.findIndex(employees, id)
        plus = 0
        if not len(employees[idx].subordinates) == 0:
            for i in employees[idx].subordinates:
                plus += self.getImportance2(employees, i)
        return employees[idx].importance + plus

    def findIndex(self, employees, n):
        for i in range(len(employees)):
            if employees[i].id == n:
                return i
        return -1



s1 = Solution()

e1 = Employee(1,5,[2,3])
e2 = Employee(2,3,[])
e3 = Employee(3,3,[])

em = []
em.append(e1)
em.append(e2)
em.append(e3)

print(s1.getImportance(em, 1))
