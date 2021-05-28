class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        
        vector <string> arr(numRows);
        int index = 0;
        bool up = 1;
        
        for(int i = 0; i < s.size(); i++){
            if(index == 0 || index == numRows - 1)
                up = !up;

            arr[index] += s[i];
            
            index += up ? -1 : 1;
        }
        
        string ans = "";
        for(string row : arr)
            ans += row;
        
        return ans;
    }
};