class Solution {
public:
    int countDigits(int num) {
        int temp;
        int ct=0;
        temp=num;
        while(temp){
            int s=temp%10;
            if(num%s==0) ct++;
            temp=temp/10;
        }
        return ct;
        
    }
};