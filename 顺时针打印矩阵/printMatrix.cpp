class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        vector<int> ret;
        if(col == 0 || row == 0)
            return ret;
        int left = 0;
        int right = col -1;
        int up = 0;
        int down = row - 1;
        while(left <= right && up <= down)
        {
            for(int i = left; i <= right; ++i)
                ret.push_back(matrix[up][i]);
            for(int i = up + 1; i <= down; ++i)
                ret.push_back(matrix[i][right]);
            if(up != down)
                for(int i = right - 1; i >= left; --i)
                    ret.push_back(matrix[down][i]);
            if(left != right)
                for(int i = down - 1; i > up; --i)
                    ret.push_back(matrix[i][left]);
            left++,right--,up++;down--;

        }

        return ret;

    }

};
