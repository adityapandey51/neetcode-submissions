class Solution:
    def gcdOfStrings(self, str1: str, str2: str) -> str:

        len1 , len2 = len(str1), len(str2)
        if len1 > len2:
            len1 , len2 = len2, len1
            str1, str2 = str2, str1

        for i in range(len1, 0, -1):
            if len1%i == 0 and len2%i == 0:
                f1 , f2 = len1//i, len2//i
                if str1[:i]*f1 == str1 and str1[:i]*f2 == str2:
                    return str1[:i]
        return ""
        