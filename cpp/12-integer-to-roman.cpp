class Solution {
public:
    string intToRoman(int num) {
        int roman[10] = {1000, 500, 100, 50, 10, 5, 1};
        unordered_map<int, char> T = {{1000, 'M'},
                            {500, 'D'},
                            {100, 'C'},
                            {50, 'L'},
                            {10, 'X'},
                            {5, 'V'},
                            {1, 'I'}};
        string ans = "";
        int j = 0;
        
        while(num > 0){
            if(num - roman[j] < 0){         
                if(j % 2 == 0 && num >= (roman[j] - roman[j+2])){
                    ans = ans + T[roman[j+2]] + T[roman[j]];
                    num -= (roman[j] - roman[j+2]);
                }
                else if(j % 2 == 1 && num >= (roman[j] - roman[j+1])){
                    ans = ans + T[roman[j+1]] + T[roman[j]];
                    num -= (roman[j] - roman[j+1]);
                }
                j++;
            }
            else {         
                ans += T[roman[j]];
                num -= roman[j];
            }
        }
        
        return ans;
    }
};