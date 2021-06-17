class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        subbox = dict()
        row = dict()
        column = dict()
        
        for i, r in enumerate(board):
            for j, c in enumerate(r):
                if c == '.':
                    continue
                    
                if row.get((c, i)) != 1:
                    row[(c, i)] = 1
                else:
                    return False
                
                if column.get((c, j)) != 1:
                    column[(c, j)] = 1
                else:
                    return False
                
                if subbox.get((c, i//3, j//3)) != 1:
                    subbox[(c, i//3, j//3)] = 1
                else:
                    return False
        
        return True