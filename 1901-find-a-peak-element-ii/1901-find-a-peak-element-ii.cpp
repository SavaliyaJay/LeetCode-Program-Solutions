class Solution {
public:
    int findMax(vector<vector<int>>& mat, int n, int m, int mid) {
        int mV = -1;
        int index = -1;

        for (int i = 0; i < n; i++) {
            if (mat[i][mid] > mV) {
                mV = mat[i][mid];
                index = i;
            }
        }
        return index;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        int low = 0, high = m - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int mRI = findMax(mat, n, m, mid);

            int l = mid - 1 >= 0 ? mat[mRI][mid - 1] : -1;
            int r = mid + 1 < m ? mat[mRI][mid + 1] : -1;

            if (mat[mRI][mid] > l && mat[mRI][mid] > r) {
                return {mRI, mid};
            } else if (mat[mRI][mid] < l) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return {-1, -1};
    }
};
