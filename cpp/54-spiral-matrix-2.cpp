class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ret;
        int i = 0;
        int from_row = 0, from_col = 0;
        int to_row = matrix.size() - 1;
        int to_col = matrix[0].size() - 1;
        int size = matrix.size() * matrix[0].size();
        
        while(ret.size() < size){
            for(i = from_col; i <= to_col && ret.size() < size; i++)
                ret.push_back(matrix[from_row][i]);
            from_row++;
            for(i = from_row; i <= to_row && ret.size() < size; i++)
                ret.push_back(matrix[i][to_col]);
            to_col--;
            for(i = to_col; i >= from_col && ret.size() < size; i--)
                ret.push_back(matrix[to_row][i]);
            to_row--;
            for(i = to_row; i >= from_row && ret.size() < size; i--)
                ret.push_back(matrix[i][from_col]);
            from_col++;
        }
        
        return ret;
    }
};