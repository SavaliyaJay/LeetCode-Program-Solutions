class Solution {
public:
    string reverseWords(string s) {
        string res,data;
        
        s+=' ';
         for(auto s1 : s){
             if(s1 == ' '){
                 if (!res.empty()) {
                    data = res + ' ' + data;
                    res = "";
                 }
             }else{                 
                 res += s1;
             }          
         }
        
        data.erase(data.size()-1,1);
        return data;
    }
};