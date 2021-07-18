class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        row = len(matrix)
        col = len(matrix[0])
        ret = []
        movr = [0, 1, 0, -1]
        movc = [1, 0, -1, 0]
        r = c = m = 0
        seen = [[False] * col for _ in range(row)]
        
        for _ in range(row * col):
            ret.append(matrix[r][c])
            seen[r][c] = True
            cr, cc = r + movr[m], c + movc[m]
            if 0 <= cr < row and 0 <= cc < col and not seen[cr][cc]:
                r, c = cr, cc
            else:
                m = (m + 1) % 4
                r, c = r + movr[m], c + movc[m]
        
        return ret