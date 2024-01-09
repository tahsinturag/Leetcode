class Solution {
public:
    int majorityElement(vector<int>& nums) {
       	////APPROACH 2: Optimal | Moore's Voting Algorithm //modify 3rd time
		int n = nums.size();
		int count = 0;
		int majority = 0;

		for(int i = 0; i < n; i++) {
			if(nums[i] == majority) {
				count++;
			} else if(count == 0) {
				majority = nums[i];
				count = 1; //extra
			} else {
				count--;;
			}
		}
		return majority;
	}
};
		/*
		  //APPROACH 1 : USING SORTING
		  sort(nums.begin(),nums.end());
		  int n= nums.size();
		  return nums[n/2];
		}
    */
		
		 
  