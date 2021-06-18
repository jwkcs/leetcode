class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> ans;
        int diff = 0;
        
        for(int i = 0; i < nums.size(); i++){
            diff = target - nums[i];
            if(m.find(diff) != m.end()){
                ans.push_back(m[diff]);
                ans.push_back(i);
                break;
            }
            m[nums[i]] = i;
        }
        return ans;
    }
};