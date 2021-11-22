class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<vector<int>> newmatrix(col, vector<int>(row));
        int newrow = col, newcolumn = row;
        for (int i = 0; i < newrow; ++i)
        {
            for (int j = 0; j < newcolumn; ++j)
            {
                newmatrix[i][j] = matrix[j][i];
            }
        }
        return newmatrix;
    }
};