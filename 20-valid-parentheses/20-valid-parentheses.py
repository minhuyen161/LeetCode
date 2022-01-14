class Solution:
    def isValid(self, s: str) -> bool:
        check = []
        for i in s:
            if i in ['(', '{', '[']:
                check.append(i)
            elif len(check)!=0 and i ==')' and check[-1]=='(':
                check.pop()
            elif len(check)!=0 and i ==']' and check[-1]=='[':
                check.pop()
            elif len(check)!=0 and i =='}' and check[-1]=='{':
                check.pop()
            else:
                return False
                
        if len(check)==0:
            return True
        else:
            return False
        