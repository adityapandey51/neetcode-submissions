class CountSquares:

    def __init__(self):
        self.ptsmap = defaultdict(int)
        self.ptslist = []
        

    def add(self, point: List[int]) -> None:
        self.ptsmap[tuple(point)] += 1
        self.ptslist.append(tuple(point))
        

    def count(self, point: List[int]) -> int:
        count = 0
        for i in range(len(self.ptslist)):
            px , py = self.ptslist[i]
            x, y = point
            if abs(px-x) == abs(py-y) and px!=x and py!=y:
                count+=(self.ptsmap[(px,y)]*self.ptsmap[(x,py)])
        return count

        
