class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        if len(nums) == 1 :
             return nums[0]
        check = 0
        for temp in nums:
            check = check^temp
        return check