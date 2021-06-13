class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size() < 3)
            return {};
        
        int L = 0;
        int R = 0;
        int sum = 0;
        vector<vector<int>> ans;
        
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size() - 2;){
            L = i + 1;
            R = nums.size() - 1;
            
            while(L < R){
                sum = nums[i] + nums[L] + nums[R];
                
                if(sum > 0)
                    while(L < --R && nums[R] == nums[R+1]);
                else if(sum < 0)
                    while(++L < R && nums[L] == nums[L-1]);
                else{
                    ans.push_back(vector<int>{nums[i], nums[L], nums[R]});
                    while(L < --R && nums[R] == nums[R+1]);
                    while(++L < R && nums[L] == nums[L-1]);
                }
            }
            while(++i < nums.size() - 2 && nums[i] == nums[i-1]);
        }
        
        return ans;
    }
};