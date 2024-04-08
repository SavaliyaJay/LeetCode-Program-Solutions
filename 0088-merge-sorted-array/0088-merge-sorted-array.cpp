
using namespace std;
class Solution {
public:
    void merge(vector<int>& v1, int m, vector<int>& v2, int n) {        
        
        for (int i=0;i<v1.size();i++){
            if(i>=m){
                v1.erase(v1.begin()+i);
                i--;
            }
        }            
        for (int i=0;i<n;i++){
            v1.push_back(v2[i]);
        }
        sort(v1.begin(),v1.end());
    }
};