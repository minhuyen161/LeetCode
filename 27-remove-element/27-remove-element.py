class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        count = 0
        lengh = len(nums) - 1
        while(count <= lengh):
            if nums[count] == val:
                nums[count]=nums[lengh]
                lengh -= 1
            else:
                count += 1
        return count