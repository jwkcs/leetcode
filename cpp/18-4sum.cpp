class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if(nums.size() < 4)
            return {};
        
        int L = 0;
        int R = 0;
        int sum = 0;
        vector<vector<int>> ans;
        
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size() - 3;){
            for(int j = i+1; j < nums.size() - 2;){
                L = j + 1;
                R = nums.size() - 1;

                while(L < R){
                    sum = nums[i] + nums[j] + nums[L] + nums[R];

                    if(sum > target)
                        while(L < --R && nums[R] == nums[R+1]);
                    else if(sum < target)
                        while(++L < R && nums[L] == nums[L-1]);
                    else{
                        ans.push_back(vector<int>{nums[i], nums[j], nums[L], nums[R]});
                        while(L < --R && nums[R] == nums[R+1]);
                        while(++L < R && nums[L] == nums[L-1]);
                    }
                }
                while(++j < nums.size() - 2 && nums[j] == nums[j-1]);
            }
            while(++i < nums.size() - 3 && nums[i] == nums[i-1]);
        }
        
        return ans;
    }
};