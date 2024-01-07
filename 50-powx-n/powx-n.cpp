    //(n=0) -> 1;
    //(n<0) -> 1/ (x, -n)

    //n even -> (x*x, n/2)
    //odd-> x *(x*x, n-1/2)
   
// version 2
class Solution {
public:
    double solve(double x, long n) {
        if (n == 0) {
            return 1;
        }
        if (n < 0) {
            return solve(1 / x, -n);
        }
        if (n % 2 == 0) {
            return solve(x * x, n / 2);
        } else {
            return x * solve(x * x, (n - 1) / 2);
        }
    }
    
    double myPow(double x, int n) {
        return solve(x, (long) n);
    }
};
