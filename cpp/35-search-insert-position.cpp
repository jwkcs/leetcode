class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int L = 0;
        int R = nums.size() - 1;
        int M;
        
        while(L <= R){
            M = (L + R) / 2;
            
            if(nums[M] == target)
                return M;
            else if(nums[M] > target)
                R = M - 1;
            else
                L = M + 1;
        }
        
        return R + 1;
    }
};