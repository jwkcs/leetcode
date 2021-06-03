class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size() < 3)
            return {};

        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size() - 2; i++){
            for(int j = i + 1; j < nums.size() - 1; j++){
                auto it = find(nums.begin() + j + 1, nums.end(), (nums[i] + nums[j]) * -1);
                if(it != nums.end()){
                    vector<int> triplet = {nums[i], nums[j], nums[it - nums.begin()]};
                    if(find(ans.begin(), ans.end(), triplet) == ans.end())
                        ans.push_back(triplet);
                }
            }
        }
        
        return ans;
    }
};