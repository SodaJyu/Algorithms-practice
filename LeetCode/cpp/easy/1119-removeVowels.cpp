class Solution {
public:
    string removeVowels(string s) {
        s.erase(remove(s.begin(), s.end(), 'a'), s.end());
        s.erase(remove(s.begin(), s.end(), 'e'), s.end());
        s.erase(remove(s.begin(), s.end(), 'i'), s.end());
        s.erase(remove(s.begin(), s.end(), 'o'), s.end());
        s.erase(remove(s.begin(), s.end(), 'u'), s.end());
        return s;
    }
};