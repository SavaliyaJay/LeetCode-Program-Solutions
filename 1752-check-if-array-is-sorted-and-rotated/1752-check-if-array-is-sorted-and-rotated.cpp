class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        bool sorted = true;

        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                sorted = false;
                break;
            }
        }

        if (sorted) return true;

        // Check if the array becomes sorted after rotation
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                reverse(nums.begin(), nums.begin() + i + 1);
                reverse(nums.begin() + i + 1, nums.end());
                reverse(nums.begin(), nums.end());
                break;
            }
        }

        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                return false;
            }
        }

        return true;
    }
};
