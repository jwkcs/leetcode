class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size() <= 1)
            return s;

        int start = 0, end = 0;
        
        for(int i = 0; i < s.size(); i++){
            int n1 = findPalindrome(s, i, i);
            int n2 = findPalindrome(s, i, i+1);
            int n = max(n1, n2);
            if(n > end - start){
                start = i - (n - 1) / 2;
                end = i + n / 2;
            }
        }
        return s.substr(start, end - start + 1);
    }
    
    int findPalindrome(string s, int left, int right){
        while(left >= 0 && right < s.size() && s[left] == s[right]){
            left--;
            right++;
        }
        return right - left - 1;
    }
};