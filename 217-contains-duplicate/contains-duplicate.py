class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        # approach-2 using set -efficient
        hashset = set()
        for n in nums:              #n = len(nums)
            if n in hashset:
                return True
            hashset.add(n)
        return False

        # it takes--> T: O(n) S: O(n)

        