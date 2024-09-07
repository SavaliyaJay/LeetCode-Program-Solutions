// class Solution {
// public:
//     string reverseWords(string s) {
//         string res,data;
//         int flag = 0;
        
//         vector<string> v;
        
//         s+= ' ';
        
//         for(int i=0; i<s.size(); i++){
//             if(s[i] == ' '){
//                 if (!res.empty()) {
//                     v.push_back(res);
//                     res = "";
//                 }
//             }else{
//                 res+=s[i];
//             }
//         }
        
//         for(int i=v.size()-1; i >= 0; i--){
//             data = data + v[i];
            
//             if(i != 0){
//                 data += ' ';
//             }
//         }
        
//         return data;
//     }
// };

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