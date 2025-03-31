class Solution {
public:
    int romanToInt(std::string s) {
        int ans = 0;
        char aux2 = 0;

        while (!s.empty()) {
            char aux = s[0];
            s = s.substr(1); // remove o primeiro caractere

            if (aux == 'M') {
                if (aux2 == 'C') {
                    ans += 800;
                } else {
                    ans += 1000;
                }
            }

            if (aux == 'D') {
                if (aux2 == 'C') {
                    ans += 300;
                } else {
                    ans += 500;
                }
            }

            if (aux == 'C') {
                if (aux2 == 'X') {
                    ans += 80;
                } else {
                    ans += 100;
                }
            }

            if (aux == 'L') {
                if (aux2 == 'X') {
                    ans += 30;
                } else {
                    ans += 50;
                }
            }

            if (aux == 'X') {
                if (aux2 == 'I') {
                    ans += 8;
                } else {
                    ans += 10;
                }
            }

            if (aux == 'V') {
                if (aux2 == 'I') {
                    ans += 3;
                } else {
                    ans += 5;
                }
            }

            if (aux == 'I') {
                ans += 1;
            }

            aux2 = aux;
        }

        return ans;
    }
};
