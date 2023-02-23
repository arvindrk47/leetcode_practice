class Solution {
public:
    bool isPerfectSquare(int num) {
        int l=1;
        int r=num;
        while(l<=r){
            long mid = l+(r-l)/2;
            long s = mid*mid;
            if(s==num){
                return true;
            }else if(s>num){
                r = (int) mid -1;
            }else{
                l = (int) mid +1;
            }

        }
        return false;
        
    }
    
};