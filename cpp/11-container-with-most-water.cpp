class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        bool min_h = 0;
        int L = 0;
        int R = height.size() - 1;
        
        while(L < R){
            min_h = height[L] < height[R] ? 1 : 0;
            if(min_h){
                ans = max(ans, (R - L) * height[L]);
                while(L < R && height[++L] <= height[L-1]);
            }
            else{
                ans = max(ans, (R - L) * height[R]);
                while(L < R && height[--R] <= height[R+1]);
            }
        }
        
        return ans;
    }
};