class Solution {
    public int[] twoSum(int[] nums, int target) {

        HashMap<Integer, Integer> map = new HashMap<>(); 
        for (int i = 0; i < nums.length; i++) { 
            int diff = target - nums[i]; 
            if (map.containsKey(diff)) { 
                return new int[] {map.get(diff), i}; // Line 8
            }
            map.put(nums[i], i); 
        }
        return new int[] {}; 
    }
} // TC: O(n), SC: O(n)

/*
Line 4: Create a HashMap to store numbers and their indices.
Line 5: Iterate through the array.
Line 6: Calculate the difference between target and the current number.
Line 7: Check if the difference exists in the HashMap.
Line 8: If it exists, return indices of the two numbers.
Line 10: Otherwise, store the current number and its index in the HashMap.
Line 12: If no solution is found, return an empty array.

Time Complexity: O(n), as we traverse the array once.
Space Complexity: O(n), for storing elements in the `HashMap`.
*/
