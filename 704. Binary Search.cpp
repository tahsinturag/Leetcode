class Solution {
public:
    int search(vector<int>& nums, int target) {
     //iterative
     int n= nums.size();
     int l=0, r=n-1;
     int mid=0;


     while(l<=r){
         mid= l+(r-l)/2;
         if(nums[mid]==target)
             return mid;
             else if(nums[mid]<target)//***move right
             l=mid+1;
             else
             r=mid-1;
         }
     // If we finish the search without finding target, return -1.  
    return -1;


    }
};


//approach2-recursive
class Solution {
public:
    int solve( vector<int>& nums, int l, int r, int target){
        if (l>r)
        return -1;
        int mid= l+(r-l)/2;
         if(nums[mid]==target)
             return mid;
        else if(nums[mid]<target)
             return solve(nums,mid+1,r,target);
         else
            return solve(nums,l,mid-1,target);
    }


    int search(vector<int>& nums, int target) {
     //recursive
     int n= nums.size();
    return solve(nums, 0, n-1, target);


    }
};
