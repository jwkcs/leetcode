class Solution:
    def findRepeatedDnaSequences(self, s: str) -> List[str]:
        d = dict()
        ret = dict()
        for i in range(len(s)):
            if i+10 > len(s):
                break
            if s[i:i+10] not in d:
                d[s[i:i+10]] = 1
            else:
                ret[s[i:i+10]] = 1
        return list(ret.keys())