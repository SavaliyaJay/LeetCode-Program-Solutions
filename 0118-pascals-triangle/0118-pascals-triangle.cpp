class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> num(n); 
        for(int i = 0; i < n; i++){
            num[i].resize(i + 1); 
            num[i][0] = num[i][i] = 1; 
            for(int j = 1; j < i; j++){
                num[i][j] = num[i-1][j-1] + num[i-1][j];
            }
        }
        return num;
    }
};
