class Solution {
public:
    string reverseVowels(string s) {
        int left = 0;
        int right = s.size() - 1;
        vector<char> str(s.begin(), s.end());
        unordered_map<char, bool> vowels;
        vowels['a'] = true;
        vowels['e'] = true;
        vowels['i'] = true;
        vowels['o'] = true;
        vowels['u'] = true;
        vowels['A'] = true;
        vowels['E'] = true;
        vowels['I'] = true;
        vowels['O'] = true;
        vowels['U'] = true;
       
        while (left < right) {
            if (vowels[str[left]] && vowels[str[right]]) {
                char temp = str[left];
                str[left] = str[right];
                str[right] = temp;
                left++;
                right--;
            } else if (vowels[str[left]]) {
                right--;
            } else if (vowels[str[right]]) {
                left++;
            } else {
                left++;
                right--;
            }
        }
        string result(str.begin(), str.end());
        return result;
    }
};

class Solution {
public:
    string reverseVowels(string s) {
        int i = 0, j = s.size() - 1;

        while (i < j) {
            i = s.find_first_of("aeiouAEIOU", i);
            j = s.find_last_of("aeiouAEIOU", j);

            if (i < j) {
                swap(s[i++], s[j--]);
            }
        }
        return s;
    }
};