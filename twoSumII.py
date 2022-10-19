class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        low = 0
        high = len(numbers) - 1
        result = []
        if not numbers: return result
        while (low < high):
            if numbers[low] + numbers[high] == target: 
                result.append(low + 1) 
                result.append(high + 1)
                break
            elif numbers[low] + numbers[high] < target:
                low += 1
            else:
                high -= 1
                
        return result