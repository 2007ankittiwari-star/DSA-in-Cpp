class Solution {
public:
    bool checkDivisibility(int n) {
        int original = n;
        int sum = 0;
        int product = 1;

        while (true) {
            int digit = n % 10;

            sum += digit;
            product *= digit;

            n = n / 10;

            if (n == 0) {
                break;
            }
        }

        return original % (sum + product) == 0;
    }
};
