#include<iostream>
using namespace std;
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int rows = mat.size();
        int cols = mat[0].size();

        if (rows * cols != r * c) {
            return mat;
        }

        vector<vector<int>> result(r, vector<int>(c));

        int index = 0;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {

                result[index / c][index % c] = mat[i][j];
                index++;
            }
        }

        return result;
    }
};