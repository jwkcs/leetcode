class Solution {
public:
    int reverse(int x) {
        int tmp = x;
        int rev_x = 0;

        while(tmp > 0 || tmp < 0){
            if((long)rev_x * 10 > INT_MAX || (long)rev_x * 10 < INT_MIN)
                return 0;
            rev_x = (rev_x * 10) + tmp % 10;
            tmp /= 10;
        }
        
        return rev_x;
    }
};