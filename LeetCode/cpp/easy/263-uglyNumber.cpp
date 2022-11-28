class Solution {
public:
    vector<int> primes = {2, 3, 5};
    bool isUgly(int n) {
        if (n < 1) return false;
        for (int i : primes)while (n % i == 0) n /= i;
        return n == 1;
    }
};