class Solution {
public:
    bool isToeplitzMatrix(std::vector<std::vector<int>>& matrix) {
        int linhas = matrix.size();
        int colunas = matrix[0].size();
        
        for (int i = 0; i < linhas - 1; ++i) {
            for (int j = 0; j < colunas - 1; ++j) {
                if (matrix[i][j] != matrix[i + 1][j + 1]) {
                    return false;
                }
            }
        }
        return true;
    }
};
