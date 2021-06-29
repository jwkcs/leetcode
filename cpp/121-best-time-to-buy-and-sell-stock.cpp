class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ret = 0;
        int buy = INT_MAX;
        
        for(int i = 0; i < prices.size(); i++){
            if(buy > prices[i])
                buy = prices[i];
            else if(prices[i] - buy > ret)
                ret = prices[i] - buy;
        }
        
        return ret;
    }
};