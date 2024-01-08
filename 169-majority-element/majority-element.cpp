class Solution {
	public: int majorityElement(vector < int > & nums) {
		/*
		  //APPROACH 1 : USING SORTING
		  sort(nums.begin(),nums.end());
		  int n= nums.size();
		  return nums[n/2];
		}
    */
		//APPROACH 2: Optimal | Moore's Voting Algorithm
		int count = 0;
		int candidate = 0;
		//        for(int num: nums)
		for(int i = 0; i < nums.size(); i++) {
			if(count == 0) {
				candidate = nums[i];
			}
			if(nums[i] == candidate) {
				count += 1;
			} else {
				count -= 1; // 12,13 line in 1 line //count+=(nums[i]==candidate)?1:-1;
			}
		}
		return candidate;
	}
};