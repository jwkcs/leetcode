class Solution {
public:
    int myAtoi(string s) {
        string tmp = "";
        bool sign = 0;
        bool n = 0;
        
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' '){
                if(sign || n)
                    break;
            }
            else if(s[i] == '+' || s[i] == '-'){
                if(sign || n)
                    break;
                tmp += s[i];
                if(!sign)
                    sign = !sign;
            }
            else if(isdigit(s[i])){
                tmp += s[i];
                if(!n)
                    n = !n;
            }
            else
                break;
        }
                
        if(tmp.empty() || !n)
            return 0;
        if(stoll(tmp.substr(0, 12)) >= INT_MAX)
            return INT_MAX;
        else if(stoll(tmp.substr(0, 12)) <= INT_MIN)
            return INT_MIN;

        return stoi(tmp);
    }
};