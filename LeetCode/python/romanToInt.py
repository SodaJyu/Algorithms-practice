class Solution:
    def romanToInt(self, s: str) -> int:
        nums = {}
        nums['I'] = 1
        nums['V'] = 5
        nums['X'] = 10
        nums['L'] = 50
        nums['C'] = 100
        nums['D'] = 500
        nums['M'] = 1000
        
        sum = 0
        for i in range(len(s)):
            if i < len(s) - 1:
                if nums[s[i]] < nums[s[i + 1]]:
                    sum -= nums[s[i]]
                else: 
                    sum += nums[s[i]]
            else:
                sum += nums[s[i]]
            
        return sum