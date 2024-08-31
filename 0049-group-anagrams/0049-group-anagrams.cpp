class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        map<string, vector<string>> m;
        string temp;

        for (int i = 0; i < n; i++) {
            temp = strs[i];
            sort(strs[i].begin(),strs[i].end());
            m[strs[i]].push_back(temp);
        }

        vector<vector<string>> res;

        for(auto itr=m.begin(); itr!=m.end(); itr++){
            res.push_back(itr->second);
        }

        return res;
    }
};