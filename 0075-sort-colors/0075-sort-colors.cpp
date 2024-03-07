class Solution {
public:
    void sortColors(vector<int>& nums) {
        int p = nums.size();
        while(0 < p){
            for(int i=0;i<p-1;i++){
                if(nums[i]>nums[i+1]){
                    swap(nums[i],nums[i+1]);
                }
            }
            p--;
        }
        
    }
};