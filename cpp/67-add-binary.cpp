class Solution {
public:
    char add(char a, char b, bool &carry){
        if(a == '1' && b == '1'){
            carry = !carry;
            return '0';
        }
        else if(a == '1' || b == '1')
            return '1';
        else
            return '0';
    }
    
    string addBinary(string a, string b) {
        int i = a.size() - 1;
        int j = b.size() - 1;
        bool carry = false;
        string ans = "";
        int ans_index = 0;
        
        while(i >= 0 || j >= 0 || carry){
            ans += '0';
            if(carry){
                ans[ans_index] = add('1', ans[ans_index], carry);
                carry = !carry;
            }
            if(i >= 0)
                ans[ans_index] = add(a[i--], ans[ans_index], carry);
            if(j >= 0)
                ans[ans_index] = add(b[j--], ans[ans_index], carry);
            ans_index++;
        }
        
        for(int k = 0; k < ans_index / 2; k++){
            char tmp = ans[k];
            ans[k] = ans[ans_index - 1 - k];
            ans[ans_index - 1 - k] = tmp;
        }
        
        return ans;
    }
};