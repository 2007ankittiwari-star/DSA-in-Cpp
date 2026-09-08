class Solution {
public:
    int countCommas(int n) {
        int totalCommas = 0;
        
        for (int i = 1; i <= n; i++) {
            std::string s=to_string(i);
            if (s.length()>3) {
                totalCommas+=(s.length() - 1) / 3;
            }
        }
        
        return totalCommas;
    }
};
