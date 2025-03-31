class Solution {
public:
    bool canPlaceFlowers(std::vector<int>& flowerbed, int n) {
        for (int i = 0; i < flowerbed.size(); ++i) {
            if (flowerbed[i] == 0) {
                bool prev_empty = (i == 0 || flowerbed[i - 1] == 0);
                bool next_empty = (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0);

                if (prev_empty && next_empty) {
                    flowerbed[i] = 1;
                    --n;
                }
            }
        }

        return n <= 0;
    }
};
