class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        space = 0
        for i, c in reversed(list(enumerate(s))):
            if c == ' ':
                space += 1
                if len(s) - i - space:
                    return len(s) - i - space
        return len(s) - space