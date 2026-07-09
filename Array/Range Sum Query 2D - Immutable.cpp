class NumMatrix {
public:

    vector<vector<int>> prefix;

    NumMatrix(vector<vector<int>>& matrix) {

        int n = matrix.size();
        int m = matrix[0].size();

        prefix = matrix;

        for(int i = 0; i < n; i++)
        {
            for(int j = 1; j < m; j++)
            {
                prefix[i][j] += prefix[i][j - 1];
            }
        }

        for(int j = 0; j < m; j++)
        {
            for(int i = 1; i < n; i++)
            {
                prefix[i][j] += prefix[i - 1][j];
            }
        }
    }

    int sumRegion(int row1, int col1, int row2, int col2) {

        int curr_val = prefix[row2][col2];

        int left_val = 0;
        if(col1 > 0)
        {
            left_val = prefix[row2][col1 - 1];
        }

        int top_val = 0;
        if(row1 > 0)
        {
            top_val = prefix[row1 - 1][col2];
        }

        int top_left_val = 0;
        if(row1 > 0 && col1 > 0)
        {
            top_left_val = prefix[row1 - 1][col1 - 1];
        }

        int sum = curr_val - left_val - top_val + top_left_val;

        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
