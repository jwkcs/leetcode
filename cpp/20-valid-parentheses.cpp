class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> brackets = {{'(', ')'},
                                              {'[', ']'},
                                              {'{', '}'}};
        stack<char> s2;
        
        for(int i = 0; i < s.size(); i++)
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
                s2.push(brackets[s[i]]);
            else {
                if(s2.empty() || s[i] != s2.top())
                    return false;
                s2.pop();
            }
        
        return s2.empty();
    }
};