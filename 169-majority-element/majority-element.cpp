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
		int n = nums.size();
        int count = 0;
		int majority = 0;
		for(int i = 0; i < n; i++) {    	//        for(int num: nums)
			if(count == 0) {
				majority = nums[i];
			}
			if(nums[i] == majority) {
				count ++;
			} else {
				count --;           // 18-22 line in 1 line ->  //count+=(nums[i]==candidate)?1:-1;
			}
		}
		return majority;
	}
};