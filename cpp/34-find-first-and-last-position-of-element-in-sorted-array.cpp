class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int L = 0, R = nums.size(), M = 0;

        while(L < R){
            M = (L + R) / 2;
            if(nums[M] < target)
                L = M + 1;
            else if(nums[M] > target)
                R = M;
            else{
                int first = M, last = M;
                while(--first >= L && nums[first] == target);
                while(++last < R && nums[last] == target);
                return vector<int>{first + 1, last - 1};
            }
        }
        
        return vector<int>{-1, -1};
    }
};