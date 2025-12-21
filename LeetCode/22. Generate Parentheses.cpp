class Solution {
public:
    
    vector<string> ans;
    
    void genrateBrackets(string sample, int open, int close, int n){
        if (sample.length() == 2*n){
            ans.push_back(sample);
            return;
        }

        if (open < n){
            string next = sample + "(";
            int a = open + 1;
            genrateBrackets(next, a, close, n);
        }

        if (open > close){
            string next = sample + ")";
            int b = close + 1;
            genrateBrackets(next, open, b, n);
        }
    }

    vector<string> generateParenthesis(int n) {
        genrateBrackets("", 0, 0, n);
        return ans;
    }
};