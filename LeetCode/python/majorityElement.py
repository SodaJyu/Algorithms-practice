class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        hash_table = {}
        majority = len(nums) // 2
        for i in nums:
            if i in hash_table:
                hash_table[i] += 1
            else:
                hash_table[i] = 1
        
        for i in hash_table:
            if hash_table[i] > majority:
                return i