class Solution {
public:
    int strStr(string haystack, string needle) {
        int len = needle.size();
        int h_len = haystack.size();
        
        if(h_len < len)
            return -1;
        
        for(int i = 0; i <= h_len - len; i++)
            if(haystack.substr(i, len) == needle)
                return i;
        
        return -1;
    }
};