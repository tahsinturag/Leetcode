class Solution {
public:
    void reverseString(vector<char>& A) {
        //method 2 using 2pointer
        int s = 0;
        int e = A.size()-1;
        
        while(s<=e){
            swap(A[s],A[e]);
            s++;
            e--;
        }
    }
};