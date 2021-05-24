class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        ans = 0
        substr = dict()
        
        for index, value in enumerate(s, start=1):
            if value in substr:
                if ans < len(substr):
                    ans = len(substr)
                substr = {key: val for key, val in substr.items() if val >= substr[value]}
            substr[value] = index
            
        if ans < len(substr):
            ans = len(substr)
            
        return ans