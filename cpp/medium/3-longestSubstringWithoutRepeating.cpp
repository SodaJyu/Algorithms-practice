class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int result = 0;
        int j = 0;
        int i = 0;
        set<char> sub;
        
        while (j < s.length()) {
         if(sub.count(s[j]) == 0) {
             sub.insert(s[j]);
             j += 1;
             result = max(result, (int)sub.size());
         } else {
             sub.erase(s[i]);
             i += 1;
         }
        }
        return result;
    }
};