class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size() < 3)
            return {};

        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size() - 2;){
            for(int j = i + 1; j < nums.size() - 1;){          
                auto it = find(nums.begin() + j + 1, nums.end(), (nums[i] + nums[j]) * -1);
                if(it != nums.end()){
                    vector<int> triplet = {nums[i], nums[j], nums[it - nums.begin()]};
                    ans.push_back(triplet);
                }
                while(j < nums.size() - 1 && nums[++j] == nums[j-1]);
            }
            while(i < nums.size() - 2 && nums[++i] == nums[i-1]);
        }
        
        return ans;
    }
};