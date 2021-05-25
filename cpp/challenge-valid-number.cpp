// May LeetCoding Challenge 2021

class Solution {
public:
    bool isNumber(string s) {
        bool ans = false;
        int sign_flag = 0;
        int dot_flag = 0;
        int ee = 0;
        bool after_e_digit = false;
        
        for(int i = 0; i < s.size(); i++){
            if(isdigit(s[i])){
                ans = true;
                sign_flag = 0;
                if(ee){
                    after_e_digit = true;
                }
            }
            else if(s[i] == '-' || s[i] == '+'){
                if(i == 0){
                    sign_flag++;
                }
                else if(s[i-1] == 'e' || s[i-1] == 'E'){
                    sign_flag++;
                }
                else {
                    ans = false;
                    break;
                }
            }
            else if(s[i] == 'e' || s[i] == 'E'){
                if(!ans){
                    break;
                }
                ee++;
            }
            else if(s[i] == '.'){
                if(ee){
                    ans = false;
                    break;
                }
                dot_flag++;
            }
            else {
                ans = false;
                break;
            }
            
            if(sign_flag >= 2 || dot_flag >= 2 || ee >= 2){
                ans = false;
                break;
            }
        }
        
        if(ee > 0 && !after_e_digit){
            ans = false;
        }
        
        return ans;
    }
};