class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> m;
        int ret = nums[0];
        
        for(int i = 0; i < nums.size(); i++){
            if(m.find(nums[i]) != m.end())
                m[nums[i]]++;
            else
                m[nums[i]] = 1;
            ret = m[ret] >= m[nums[i]] ? ret : nums[i];
        }
        
        return ret;
    }
};