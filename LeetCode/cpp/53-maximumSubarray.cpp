class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current = nums[0];
        int maxSum = nums[0];
        
        for (int i = 1; i < nums.size(); i++) {
            int num = nums[i];
            
            current = max(num, current + num);
            maxSum = max(maxSum, current);
        }
      
        
        return maxSum;
    }
};