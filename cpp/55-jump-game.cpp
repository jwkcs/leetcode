class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size() - 1;
        if(n == 0) return true;
        
        int i = 0;
        int max = nums[0];
        
        while(i < max){
            if(max >= n)
                return true;
            while(++i + nums[i] < max);
            max = i + nums[i];
        }

        return false;
    }
};