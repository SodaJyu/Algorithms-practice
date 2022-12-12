class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int length = indices.size();
        if (s.size() != length) return s;
        unordered_map<char, int> dict;
        vector<char> result;

        for (int i = 0; i < length; i++) {
            dict[indices[i]] = s[i];
        }
        for (int i = 0; i < length; i++) {
            result.push_back(dict[i]);
        }
        string str(result.begin(), result.end());
        return str;
    }
};