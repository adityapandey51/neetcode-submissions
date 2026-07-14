class Solution:
    def myPow(self, x: float, n: int) -> float:
        res = 1
        neg = False
        if n < 0:
            n *= -1
            neg = True
        while n > 0:
            if n&1:
                res *= x
            x *= x
            n = n>>1
        return 1/res if neg else res

        