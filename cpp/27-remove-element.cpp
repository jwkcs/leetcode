class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len = nums.size() - 1;
        
        for(int i = 0; i <= len; i++){
            while(len > 0 && i != len && nums[len] == val)
                len--;
            if(nums[i] == val)
                nums[i] = nums[len--];
        }
        
        return len + 1;
    }
};