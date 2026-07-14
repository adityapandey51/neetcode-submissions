class Solution:
    def countOdds(self, low: int, high: int) -> int:
        count = (high-low+1)//2
        if low&1 and (high-low+1)&1:
            return count+1
        return count
        