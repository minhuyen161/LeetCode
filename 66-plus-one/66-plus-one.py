class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        if digits[-1]<9:
            digits[-1] += 1
            return digits
        reg = 0
        for i in range(0, len(digits)):
            if digits[-(i+1)]==9:
                digits[-(i+1)] = 0
                reg = 1
            else:
                digits[-(i+1)] += 1
                break
            if i == (len(digits)-1) and reg == 1:
                digits.insert(0,1)
        return digits
                
                