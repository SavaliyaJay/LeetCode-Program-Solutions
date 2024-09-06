class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
        int openCount = 0; 
        
        for (char ch : s) {
            if (ch == '(') {
                if (openCount > 0) {  
                    result += ch;
                }
                openCount++;
            } else {
                openCount--;
                if (openCount > 0) { 
                    result += ch;
                }
            }
        }
        
        return result;
    }
};
