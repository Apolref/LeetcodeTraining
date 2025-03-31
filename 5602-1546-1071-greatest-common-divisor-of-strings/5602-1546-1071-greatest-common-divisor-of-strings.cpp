class Solution {
public:
    std::string gcdOfStrings(std::string str1, std::string str2) {
        // Função auxiliar para calcular o MDC (Máximo Divisor Comum)
        auto gcd = [](int a, int b) {
            while (b != 0) {
                int temp = b;
                b = a % b;
                a = temp;
            }
            return a;
        };

        if (str1 + str2 != str2 + str1) {
            return "";
        }

        int len_gcd = gcd(str1.length(), str2.length());
        return str1.substr(0, len_gcd);
    }
};
