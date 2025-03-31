class Solution {
public:
    std::string mergeAlternately(std::string word1, std::string word2) {
        int n = std::max(word1.length(), word2.length());
        std::string ans = "";

        for (int i = 0; i < n; ++i) {
            if (i < word1.length()) {
                ans += word1[i];
            }
            if (i < word2.length()) {
                ans += word2[i];
            }
        }

        return ans;
    }
};
