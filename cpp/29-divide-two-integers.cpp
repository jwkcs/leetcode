class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        if(dividend == INT_MAX && divisor == 1)
            return INT_MAX;
        if(dividend == INT_MIN && divisor == 1)
            return INT_MIN;
        if(dividend == INT_MAX && divisor == -1)
            return INT_MIN + 1;
        
        // cout << INT_MAX << ' '<< INT_MIN << endl;
        
        int ans = 0;
        // int tmp1 = 0, tmp2 = 1;
        int i = 0;
        int dividend_tmp = abs(dividend);
        int divisor_tmp = abs(divisor);
        // int sign = dividend < 0 ^ divisor < 0 ? -1 : 1;
        cout << (1 << 1) << endl;
        while(dividend_tmp >= divisor_tmp){
        //     // tmp1 = divisor_tmp;
        //     // tmp2 = 1;
            // for(i = 1; dividend_tmp >= (divisor_tmp << i); i++);            
            for(i = 0; dividend_tmp >= (divisor_tmp << i << 1); i++);


            // ans += 1 << i - 1;
            // dividend_tmp -= divisor_tmp << i - 1;
            ans += 1 << i;
            dividend_tmp -= divisor_tmp << i;
            // while(tmp1 << 1 <= dividend_tmp){
            //     tmp1 <<= 1;
            //     tmp2 <<= 1;
            // }
            // dividend_tmp -= tmp1;
            // ans += tmp2;
        }
        
        // return ans * sign;
        return dividend < 0 ^ divisor < 0 ? -ans : ans;
    }
};