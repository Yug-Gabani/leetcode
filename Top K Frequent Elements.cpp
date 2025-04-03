class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;

        for(int val : nums){
            mp[val]++;
        }

        vector<int>result;

        for(int i =0 ;i < k ; i++){
            int mmm =0;
            int maxxx =0;
            for (auto& [val, freq] : mp) {
                if (freq > mmm) {
                    mmm = freq;
                    maxxx = val;
                }
            }
            result.push_back(maxxx);
            mp.erase(maxxx);
        }
        return result;
    }
};
