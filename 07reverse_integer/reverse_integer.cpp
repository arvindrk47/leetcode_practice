class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        
        while(x !=0){
            // this digit variable gets remainder of the varaible x
            int digit = x%10;
            x /= 10;
            if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && digit > 7)) return 0;
            if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && digit < -8)) return 0;
            //formula for reverse the digit rev = (rev*10)+lastdigit of the x varaible
            rev = (rev*10)+digit;
        }
        return rev;
        
    }
};