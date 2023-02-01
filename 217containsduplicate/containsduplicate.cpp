class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int>dup;
        for(int i=0; i<nums.size(); i++){
            if(dup[nums[i]]){
                return true;
            }

            dup[nums[i]]++;
        }
        return false;
    }
};