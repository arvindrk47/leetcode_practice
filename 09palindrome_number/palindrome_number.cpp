class Solution {
public:
    bool isPalindrome(int x) {
        unsigned int rev = 0;
        unsigned int dup =x;
        while(x > 0){
            int digit = x %10;
            rev = (rev*10)+digit;
            x = x/10;
        }
        if(dup == rev) return true;
        else return false;
        
    }
};