class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int d = nums.size() / 3;
                
        map<int,int> m;
        
        for(auto n: nums){
            m[n]++;
        }
        
        vector<int> d1;
        
        for(auto m1: m){
            if(m1.second > d){
                d1.push_back(m1.first);
            }
        }
        
        return d1;
    }
};