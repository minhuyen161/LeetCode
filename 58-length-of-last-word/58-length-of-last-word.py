class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        count = 0
        for i in range(0,len(s)):
            if s[-(i+1)] !=' ':
                count += 1
            if s[-(i+1)]== ' ' and count != 0:
                break
        return count