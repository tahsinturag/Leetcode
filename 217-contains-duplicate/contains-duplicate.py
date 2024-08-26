class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        # approach-1 using sort
        nums.sort()
        for i in range (1, len(nums)):
            if nums[i] == nums[i-1]:
                return True
        return False

        # it takes--> T: O(nlogn) S: O(n)

        