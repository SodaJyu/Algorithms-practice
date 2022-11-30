class Solution {
public:
    int twoSumLessThanK(vector<int>& nums, int k) {
        int maxi = -1;
        
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] < k) {
                    maxi = max(maxi, nums[i] + nums[j]);
                }
            }
        }
        return maxi;
    }
};