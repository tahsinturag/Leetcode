class Solution {
    public boolean containsDuplicate(int[] nums) {

        Set<Integer> visited = new HashSet<>(); // Line 4
        for (int i = 0; i < nums.length; i++) { 
            if (visited.contains(nums[i])) { 
                return true; 
            } else { 
                visited.add(nums[i]); // Line 9
            }
        }  
        return false; // Line 12
    }
} // TC: O(n), SC: O(n)

/*
Line 4: Initialize a `HashSet` called `visited` to keep track of unique numbers.
Line 5: Start iterating over each number in the array `nums`.
Line 6: Check if the current number (`nums[i]`) is already in the `visited` set.
Line 7: If the number is found in the set, it means a duplicate exists, so return `true`.
Line 9: If the number is not in the set, add it to the `visited` set to track it.
Line 12: After checking all numbers, if no duplicates are found, return `false`.

Time Complexity: O(n), because we check each element in the array once.
Space Complexity: O(n), because the `HashSet` stores up to `n` unique elements from the array.

*/
