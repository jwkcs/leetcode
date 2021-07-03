class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n = 0;
        int ret = 0;

        for(int i = columnTitle.size() - 1; i >= 0; i--)
            ret += (columnTitle[i] - 'A' + 1) * pow(26, n++);

        return ret;
    }
};