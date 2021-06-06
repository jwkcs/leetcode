class Solution {
public:
    bool isValid(string s) {
        if(s.size() % 2 == 1)
            return false;
        if(s[0] == ')' || s[0] == ']' || s[0] == '}')
            return false;
        
        unordered_map<char, char> brackets = {{'(', ')'},
                                              {'[', ']'},
                                              {'{', '}'}};
        int j = 0;
        string s2 = "";
        
        for(int i = 0; i < s.size(); i++)
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
                s2[j++] = brackets[s[i]];
            else if(--j < 0 || s[i] != s2[j])
                return false;
        
        return j == 0 ? true : false;
    }
};