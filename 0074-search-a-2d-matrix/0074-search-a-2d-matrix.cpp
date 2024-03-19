class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for (auto it : matrix){
            for (auto v : it){
                if(v == target){
                    return true;
                }
            }
        }
        return false;
    }
};