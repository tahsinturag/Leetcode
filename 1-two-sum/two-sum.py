class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # bruthforce
        for i in range(len(nums)):                
            for j in range(i + 1, len(nums)):
                if nums[i] + nums[j] == target:
                    return [i, j]


# T:  0(n^2) 
# S: O(1)  The solution does not use any additional data structure
