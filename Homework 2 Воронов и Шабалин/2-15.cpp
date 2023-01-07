class Solution {
public:
    vector<vector<int>> generate(int Rows) {
        vector<vector<int>> ans(Rows);
        for (int i = 0; i < Rows; ++i) {
            ans[i] = vector<int>(i + 1, 1);
            for (int j = 1; j < i; ++j) {
                ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
            }
        }
        return ans;
    }
};