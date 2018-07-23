class Solution:
    notChecked = []
    def canVisitAllRooms(self, rooms):
        """
        :type rooms: List[List[int]]
        :rtype: bool
        """
        self.notChecked = [False for i in range(len(rooms))]
        self.notChecked[0] = True

        for i in rooms[0]:
            self.recursive(rooms, i)

        if False in self.notChecked:
            return False
        return True

    def recursive(self, rooms, index):
        if self.notChecked[index]:
            return -1
        self.notChecked[index] = True
        for i in rooms[index]:
            self.recursive(rooms, i)










#큐를 이용한 너비우선 탐색?
    def canVisitAllRooms2(self, rooms):
        f={0}
        u={0}
        while u:
            x=u.pop()
            for key in rooms[x]: #다 보긴보되 이미본건보지않겠다
                if key not in f:
                    u.add(key)
                f.add(key)
        if len(f)==len(rooms):
            return True
        else:
            return False
