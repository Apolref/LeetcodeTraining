class Solution {
public:
    int reverse(int x) {
        long long num = x; // usa long long para evitar overflow com INT_MIN
        bool negativo = num < 0;
        num = std::abs(num); // agora é seguro

        std::string x_str = std::to_string(num);
        std::reverse(x_str.begin(), x_str.end());

        long long ans = std::stoll(x_str); // usa long long para segurança

        if (negativo) {
            ans = -ans;
        }

        if (ans < INT_MIN || ans > INT_MAX) {
            return 0;
        }

        return static_cast<int>(ans);
    }
};
