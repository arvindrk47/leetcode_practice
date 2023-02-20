class Solution {
public:
    int commonFactors(int a, int b) {
        int ct;
        int n = min(a,b);
        for(int i=1; i<=n; i++){
            if(a%i==0&&b%i==0){
                ct++;

            }
            
            
        }
        return ct;
        
    }
};