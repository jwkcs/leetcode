class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int L = 0;
        int R = 0;
        int diff = INT_MAX;
        int sum = 0;
        int ans = 0;
        
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size() - 2;){
            L = i + 1;
            R = nums.size() - 1;
            
            while(L < R){
                sum = nums[i] + nums[L] + nums[R];
                
                if(sum == target)
                    return sum;
                else if(abs(sum - target) < diff){
                    diff = abs(sum - target);
                    ans = sum;
                }
                
                if(sum > target)
                    while(L < --R && nums[R] == nums[R+1]);
                else
                    while(++L < R && nums[L] == nums[L-1]);
            }
            while(++i < nums.size() - 2 && nums[i] == nums[i-1]);
        }
        
        return ans;
    }
};