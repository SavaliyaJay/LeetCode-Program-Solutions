class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> data;
        
         for (int num : nums) {
            if (data[num] >= 1)
                return true;
            data[num]++;
        }
        return false;
    }
};