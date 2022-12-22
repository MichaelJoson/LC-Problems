class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        mappings1 = {} 
        mappings2 = {}
        result = ""
        
        for i in range(len(s)):
            a = s[i]
            b = t[i]
            if ((a in mappings1 and mappings1[a] != b)
            or (b in mappings2 and mappings2[b] != a)):
                return False
            mappings1[s[i]] = t[i]
            mappings2[t[i]] = s[i]
        return True