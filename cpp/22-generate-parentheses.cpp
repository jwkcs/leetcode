class Solution {
public:
    void func(vector<string> &ans, string s, int i, int j){
        if(i == 0 && j == 0)
            ans.push_back(s);
        if(i > 0)
            func(ans, s+'(', i-1, j);
        if(j > i)
            func(ans, s+')', i, j-1);
        
        return;
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        func(ans, "", n, n);
        
        return ans;
    }
};