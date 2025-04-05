class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());

        int count = 0;

        for(int val : numSet) {
            if(!numSet.count(val-1)) {
                int cn = val;
                int cs = 1;

                while(numSet.count(cn+1)) {
                    cn++;
                    cs++;
                }

                count = max(count, cs);
            }
        }

        return count;
    }
};
