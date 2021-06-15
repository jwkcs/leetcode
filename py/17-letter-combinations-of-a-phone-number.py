class Solution:
    def letterCombinations(self, digits: str) -> List[str]:     
        letters = ["0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"]

        ans = [''] if digits else []

        for c in digits:
            ans = [a + b for a in ans for b in letters[int(c)]]
            
        return ans