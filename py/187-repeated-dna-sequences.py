class Solution:
    def findRepeatedDnaSequences(self, s: str) -> List[str]:
        d = dict()
        for i in range(len(s)):
            if i+10 > len(s):
                break
            if s[i:i+10] not in d:
                d[s[i:i+10]] = 1
            else:
                d[s[i:i+10]] += 1
        return list({key for key, value in d.items() if value >= 2})