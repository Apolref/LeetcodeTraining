class Solution {
public:
    int uniquePaths(int m, int n) {
        int a = m + n - 2;
        int b = std::min(m - 1, n - 1);

        double res = 1.0; // usar double para evitar overflow

        for (int i = 1; i <= b; ++i) {
            res *= (a - i + 1);
            res /= i;
        }

        return static_cast<int>(res + 0.5); // arredonda para inteiro mais próximo
    }
};
