class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>a;
        for(int i = 0 ;i < nums.size() ; i++){
            int rem = target - nums[i];
            if (a.find(rem) != a.end()) {
                return {a[rem], i}; 
            }
            a[nums[i]] = i;
        }
        return {};
    }
};
