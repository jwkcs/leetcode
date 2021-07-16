class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ret;
        int from_row = 0, from_col = 0;
        int to_row = matrix.size();
        int to_col = matrix[0].size();
        int size = to_row * to_col;
        int movr[4] = {0, 1, 0, -1};
        int movc[4] = {1, 0, -1, 0};
        int r = 0, c = 0, cr = 0, cc = 0, m = 0;
        
        for(int i = 0; i < size; i++){
            ret.push_back(matrix[r][c]);
            cr = r + movr[m];
            cc = c + movc[m];
            if(from_row <= cr && cr < to_row && from_col <= cc && cc < to_col){
                r = cr;
                c = cc;
            }
            else{
                if(m == 0)
                    from_row++;
                else if(m == 1)
                    to_col--;
                else if(m == 2)
                    to_row--;
                else if(m == 3)
                    from_col++;
                m = (m + 1) % 4;
                r = r + movr[m];
                c = c + movc[m];
            }
        }
        
        return ret;
    }
};