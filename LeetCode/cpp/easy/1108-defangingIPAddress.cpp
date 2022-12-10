class Solution {
public:
    string defangIPaddr(string address) {
        string result;
        for (char i : address) {
            if (i == '.') {
                result += "[.]";
            } else {
                result += i;
            }
        }
        return result;
    }
};