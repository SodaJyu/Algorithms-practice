class Solution {
public:
    bool checkIfPangram(string s) {
        unordered_map<char, int> map;
        for (char& i : s) {
            if (map.find(i) != map.end()) {
                map[i] = 1;
            } else {
                map[i]++;
            }
        }
        return map.size() == 26;
    }
    // set<char> chars;
    // for (char& i : s) {
    //     chars.insert(i);
    // }
    // return chars.size() == 26;
    // }
};