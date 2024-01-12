class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        long long sum;

        for (int i = 0; i < n - 3; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            for (int j = i + 1; j < n - 2; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;

                int left = j + 1, right = n - 1;
                //using 2 pointer
                while (left < right) {
                    sum = static_cast<long long>(nums[i]) + nums[j] + nums[left] + nums[right];

                    if (sum > target)
                        right -= 1;
                    else if (sum == target) {
                        vector<int> t;
                        t.push_back(nums[i]);
                        t.push_back(nums[j]);
                        t.push_back(nums[left]);
                        t.push_back(nums[right]);
                        ans.insert(t);
                        left += 1;
                    } else
                        left += 1;
                }
            }
        }

        vector<vector<int>> res;
        for (vector<int> it : ans) {
            res.push_back(it);
        }

        return res;
        /*
        // or
        vector<vector<int>> res(ans.begin(), ans.end());
        return res;
        */
    }
};
