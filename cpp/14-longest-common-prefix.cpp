class Solution {
public:
    static bool cmp(string &s1, string &s2){
        return s1.size() < s2.size();
    }
    
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end(), cmp);
        
        int len = strs[0].size();
        
        for(int i = 1; i < strs.size(); i++){
            for(int j = 0; j < len; j++){
                if(strs[0][j] != strs[i][j]){
                    len = j;
                    break;
                }
            }
        }
        
        return strs[0].substr(0,len);
    }
};