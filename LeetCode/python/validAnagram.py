class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        sortedS = sorted(s)
        sortedT = sorted(t)
        
        for i in range(len(s)):
            s_val = sortedS.pop()
            t_val = sortedT.pop()
            if s_val != t_val:
                return False
        
        return True