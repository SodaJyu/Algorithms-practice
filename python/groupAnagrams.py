class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        check = {}
        
        for i in range(len(strs)):
            sortedString = sorted(strs[i])
            joinedString = ''.join(sortedString)
            
            if joinedString in check:
                check[joinedString].append(strs[i])
            else:
                check[joinedString] = [strs[i]]
        
        return check.values()