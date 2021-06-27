class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums[0] == target) return 0;
        
        int L = 0, R = nums.size(), M = 0;
        
        while(L < R){
            M = (L + R) / 2;
            if ((nums[M] < nums[0]) == (target < nums[0])){
                if(nums[M] < target)
                    L = M + 1;
                else if(nums[M] > target)
                    R = M;
                else
                    return M;
            }
            else if(nums[M] < target)
                R = M;
            else
                L = M + 1;
        }
        
        return -1;
    }
};