class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        allSum = 0
        actualSum = 0
        numsSet = set(nums)
        
        for i in numsSet:
            allSum += 2 * i
        
        for i in nums:
            actualSum += i
        
        return allSum - actualSum