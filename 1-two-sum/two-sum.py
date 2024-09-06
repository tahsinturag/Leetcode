class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # optimal solution using hashmap in c++ / dictionary in python
        seen = {}
        for i , value in enumerate (nums):
            remaining = target - value
            # remaining = target - nums[i]
            if remaining in seen: 
                return[seen[remaining], i]
            seen[value] = i
        

# T: 0(n)  a single loop that iterates through the nums list exactly once, where n is the length of the list.
# S: O(n)  all n elements could be stored in the seen dictionary
