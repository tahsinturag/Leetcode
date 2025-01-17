class Solution {
    public int[] productExceptSelf(int[] nums) {
        int[] result = new int[nums.length];       // Line 3
        Arrays.fill(result, 1);
        int pre = 1, post = 1;
        for(int i = 0; i < nums.length; i++) {    // Line 6
            result[i] = pre;                       // Line 7
            pre = nums[i] * pre;                   // Line 8
        }
        
        for(int i = nums.length - 1; i >= 0; i--) { // Line 11
            result[i] = result[i] * post;           // Line 12
            post = post * nums[i];                  // Line 13
        }
        return result;
    }
}// TC: O(n), SC: O(1) (not counting output array)

/*
Line 3: Create result array of same length as input array.
Line 4: Initialize result array with all 1s.
Line 5: Initialize variables for prefix and postfix products.
Line 6: First loop - traverse array from left to right.
Line 7: Store current prefix product in result array.
Line 8: Update prefix product by multiplying with current number.
Line 11: Second loop - traverse array from right to left.
Line 12: Multiply existing prefix result with postfix product.
Line 13: Update postfix product by multiplying with current number.

Time Complexity: O(n), as we traverse the array twice.
Space Complexity: O(1), as we only use two variables (pre, post). 
Note: The result array is not counted in space complexity as it's part of the output.
*/