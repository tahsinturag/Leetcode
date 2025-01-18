class Solution {
    public int findMin(int[] nums) {
        int start = 0, end = nums.length - 1;        // Line 3
        while (start < end) {                        // Line 4
            if (nums[start] < nums[end]) {           // Line 5
                return nums[start];                  // Line 6
            }
            int mid = start + (end - start) / 2;     // Line 7
            if (nums[mid] >= nums[start]) {          // Line 8
                start = mid + 1;                     // Line 9
            } else {                                 // Line 10
                end = mid;                           // Line 11
            }
        }
        return nums[start];                          // Line 12
    }
}// TC: O(log n), SC: O(1)

/*
Line 3: Initialize pointers for binary search (start and end).
Line 4: Continue while start pointer is less than end pointer.
Line 5: If subarray is sorted, the smallest element is at the start.
Line 6: Return the smallest element as the minimum.
Line 7: Calculate the mid index to divide the array.
Line 8: Check if the mid value is greater than or equal to start.
Line 9: Update the start pointer to mid + 1 (search right half).
Line 10: Otherwise, the minimum is in the left half.
Line 11: Update the end pointer to mid.
Line 12: Return the smallest element at the start pointer.

Time Complexity: O(log n), as it performs binary search.
Space Complexity: O(1), as no extra space is used.
*/
