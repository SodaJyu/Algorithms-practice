class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxVolume {0}, currentVolume {0}, i {0}, j = height.size() - 1;
        
        while (i < j) {
            currentVolume = min(height[i], height[j]) * (j - i);
            maxVolume = max(maxVolume, currentVolume);
            
            if (height[i] <= height[j]) {
                i++;
            } else {
                j--;
            }
        }
        
        return maxVolume;
        
    }
};