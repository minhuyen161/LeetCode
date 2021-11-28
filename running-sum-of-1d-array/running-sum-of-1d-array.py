class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        sum = 0
        arr = []
        for num in nums:
            sum += num
            arr.append(sum)
        return arr