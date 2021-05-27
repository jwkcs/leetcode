class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 || x % 10 == 0 && x > 0)
            return false;
        int tmp = x;
        long rev_x = 0;
        
        while(tmp > 0){
            rev_x = (rev_x * 10) + tmp % 10;
            tmp /= 10;
        }
        
        if(rev_x == x)
            return true;
        else
            return false;
    }
};