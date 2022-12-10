class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count = 0;
        int rule;
        if (ruleKey == "type") {
            rule = 0;
        } else if (ruleKey == "color") {
            rule = 1;
        } else if (ruleKey == "name") {
            rule = 2;
        }
        for (int i = 0; i < items.size(); i++) {
            if (items[i][rule] == ruleValue) {
                count += 1;
            }
        }
        return count;
    }
};