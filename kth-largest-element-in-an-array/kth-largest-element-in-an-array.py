class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        nums.sort()
        check = nums[0]
        counter = 1
        for i in reversed(nums):
            if counter == k:
                return i
            counter = counter + 1