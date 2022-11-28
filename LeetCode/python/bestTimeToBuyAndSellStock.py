class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        maxSoFar = 0
        currentLow = inf
        
        for i in range(len(prices)):
            if prices[i] < currentLow:
                currentLow = prices[i]
            else:
                if prices[i] - currentLow > maxSoFar:
                    maxSoFar = prices[i] - currentLow
        
        return maxSoFar