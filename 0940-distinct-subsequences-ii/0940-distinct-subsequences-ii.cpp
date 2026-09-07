class Solution {
public:
    int distinctSubseqII(string s) {
        long long dp[26] = {0};
        long long mod = 1e9 + 7;
        long long total = 0;
        
        for (char c : s) {
            long long diff = (total - dp[c - 'a'] + 1 + mod) % mod;
            dp[c - 'a'] = (dp[c - 'a'] + diff) % mod;
            total = (total + diff) % mod;
        }
        
        return total;
    }
};
