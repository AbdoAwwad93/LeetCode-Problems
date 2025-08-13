class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1) return true;
        if (n<1) return false;
        double res= log(n)/log(3);
        if(fabs(res-round(res)) < 1e-10){
            return true;
        }
        else {
            return false;
        }
        
    }
};