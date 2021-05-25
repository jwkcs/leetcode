class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        vector <int> ans;
        bool endflag = 0;
        
        for(int i = 0; i < size - 1; i++){
            for(int j = 1; j < size; j++){
                if(i != j && nums[i] + nums[j] == target){
                    ans.push_back(i);
                    ans.push_back(j);
                    endflag = 1;
                    break;
                }
            }
            if(endflag)
                break;
        }
        
        return ans;
    }
};
