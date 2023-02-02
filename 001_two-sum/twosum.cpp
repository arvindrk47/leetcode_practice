class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            int ans = target - nums[i];
            if (map.count(ans) && map[ans] != i) {
                return {i, map[ans]};
            }
            map[nums[i]] = i;
        }
        return {};
        
    }
};