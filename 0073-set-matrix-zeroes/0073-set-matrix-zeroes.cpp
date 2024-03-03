using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> arr;
        int m = matrix.size();
        int n = (m == 0) ? 0 : matrix[0].size();

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(matrix[i][j] == 0) {
                    arr.push_back(i);
                    arr.push_back(j);
                }
            }
        }
        
        for(auto it = arr.begin(); it != arr.end(); it += 2) {
            int row = *it;
            int col = *(it + 1);
            for(int i = 0; i < m; i++) {
                matrix[i][col] = 0;
            }
            for(int j = 0; j < n; j++) {
                matrix[row][j] = 0;
            }
        }
    }
};
