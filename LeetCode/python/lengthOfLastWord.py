class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        length = 0
        word = False
            
        for i in reversed(range(len(s))):
            if s[i] == ' ' and word == False:
                continue
            elif s[i] == ' ':
                break
            elif s[i] != ' ' and word == False:
                word = True
                length += 1
            else:
                length += 1
        
        return length