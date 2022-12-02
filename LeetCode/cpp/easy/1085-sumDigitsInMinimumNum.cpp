class Solution {
public:
    int sumOfDigits(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int num = nums[0];
        int sum = 0;
        
        while (num != 0) {
            sum += num % 10;
            num /= 10;
        }
        
    return sum % 2 == 0 ? 1 : 0;
    }
};