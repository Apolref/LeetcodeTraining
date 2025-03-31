class Solution {
public:
    std::string intToRoman(int num) {
        std::vector<std::pair<int, std::string>> roman_map = {
            {1000, "M"}, {1000, "M"}, {900, "CM"},
            {500, "D"}, {400, "CD"},
            {100, "C"}, {90, "XC"},
            {50, "L"}, {40, "XL"},
            {10, "X"}, {9, "IX"},
            {5, "V"}, {4, "IV"},
            {1, "I"}
        };

        std::string resultado = "";

        for (const auto& [valor, simbolo] : roman_map) {
            while (num >= valor) {
                resultado += simbolo;
                num -= valor;
            }
        }

        return resultado;
    }
};
