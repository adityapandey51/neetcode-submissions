class Solution:
    def isHappy(self, n: int) -> bool:

        visited = set()
        visited.add(n)

        def sumOfSquares(n):
            res = 0

            while n > 0:
                res += (n%10)**2
                n //= 10
            return res
        
        while n != 1:
            n = sumOfSquares(n)

            if n in visited:
                return False
            visited.add(n)
        return True
        