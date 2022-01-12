class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        if nums is None or len(nums)==0:
            return
        result = 1
        more = 1
        for i in range(0, len(nums)-1):
            for j in range(i+more, len(nums)):
                if nums[i] == nums[j]:
                    more +=1
                else:
                    nums[i+1] = nums[j]
                    result += 1
                    break
        return result