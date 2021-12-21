class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        def helper(s,l,r):
            left=[]
            right =[]
            if l==0 and r==0:
                return [s]
            if l-1>=0:
                left.extend(helper(s+'(',l-1,r))
            if r-1>=0 and r-1>=l:  
                right.extend(helper(s+')',l,r-1))
            return left+right
            
        return helper('(',n-1,n)