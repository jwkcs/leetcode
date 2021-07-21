class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ret = 0;
        int bits = 31;
        
        while(n){
            ret += (n & 1) << bits--;
            n >>= 1;
        }
        
        return ret;
    }
};