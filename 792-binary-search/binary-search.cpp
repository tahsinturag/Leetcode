class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;    //imp

            // Check if target is present at mid
            if (nums[mid] == target)
                return mid;

            // If target is greater, ignore left half
            // If mid index is less than the target, update left to mid + 1
            if (nums[mid] < target)
                left = mid + 1;
            // else, update right to mid - 1
            else
                right = mid - 1;
        }

        // If target is not present in array
        return -1;
    }
};
