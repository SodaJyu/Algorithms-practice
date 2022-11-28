class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maximum = 0;
        int minimumSoFar = INT_MAX;
        
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < minimumSoFar) {
                minimumSoFar = prices[i];
            } else {
               maximum = max(maximum, prices[i] - minimumSoFar);
            }
        }
        return maximum;
    }
};