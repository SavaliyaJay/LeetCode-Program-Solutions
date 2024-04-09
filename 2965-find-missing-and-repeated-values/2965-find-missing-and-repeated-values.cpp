class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
      
        int n = grid.size();
        unordered_set<int> d;

        int r = 0, m = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                int num = grid[i][j];

                if (d.count(num)) {
                    r = num;
                } else {
                    d.insert(num);
                }
            }
        }

        for (int i = 1; i <= n * n; ++i) {
            if (!d.count(i)) {
                m = i;
                break;
            }
        }

        return {r, m};
    }
};