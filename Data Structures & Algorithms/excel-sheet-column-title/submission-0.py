class Solution:
    def convertToTitle(self, columnNumber: int) -> str:

        res = ""

        while columnNumber > 0:
            lastChar = chr(ord('A') + (columnNumber-1)%26)
            res += lastChar
            columnNumber = (columnNumber-1)//26
        return res[::-1]
        