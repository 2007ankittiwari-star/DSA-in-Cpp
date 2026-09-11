class Solution {
public:
    int totalNumbers(std::vector<int>& digits) {
        int counts[10] = {0};
        for (int d : digits) counts[d]++;
        
        int resultCount = 0;
        for (int i = 100; i <= 998; i += 2) {
            int h = i / 100, t = (i / 10) % 10, u = i % 10;
            if (counts[h] > 0) {
                counts[h]--;
                if (counts[t] > 0) {
                    counts[t]--;
                    if (counts[u] > 0) resultCount++;
                    counts[t]++;
                }
                counts[h]++;
            }
        }
        return resultCount;
    }
};
