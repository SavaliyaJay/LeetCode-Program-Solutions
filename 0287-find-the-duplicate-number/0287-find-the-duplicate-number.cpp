#include <unordered_map>

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        
         unordered_map<int, int> count;

        
        for (int num : nums) {
            if (++count[num] > 1) {
                return num;
            }
        }
    
    return -1; 
    
    }
};