class Solution {
public: ////APPROACH : Optimal | Moore's Voting Algorithm
    vector<int> majorityElement(vector<int> &nums) {
        int n = nums.size();
        int count1 = 0;
        int majority1 = 0;
        int count2 = 0;
        int majority2 = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == majority1) {
                count1++;
            } else if (nums[i] == majority2) {
                count2++;
            } else if (count1 == 0) {
                majority1 = nums[i];
                count1 = 1; //extra
            } else if (count2 == 0) {
                majority2 = nums[i];
                count2 = 1; //extra
            } else {
                count1--;
                count2--;
            }
        }

        //checking
        vector<int> result;
        count1 = 0;
        count2 = 0;
        /*for(int num:nums) {
            if(num == majority1)
                count1++;
            else if(num == majority2)
                count2++;
        }
        if(count1 > floor(n/3))
            result.push_back(majority1);
        if(count2 > floor(n/3))
            result.push_back(majority2);
        return result;
        */
        for (int i = 0; i < n; ++i) {
            int num = nums[i];

            if (num == majority1) {
                count1++;
            } else if (num == majority2) {
                count2++;
            }
        }

        if (count1 > floor(n / 3)) {
            result.push_back(majority1);
        }
        if (count2 > floor(n / 3)) {
            result.push_back(majority2);
        }

        return result;
    }
};
