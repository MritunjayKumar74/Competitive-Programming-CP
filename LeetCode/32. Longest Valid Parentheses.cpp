class Solution {
public:
    int longestValidParentheses(string s) {
        int maxLength = 0;
        int left = 0, right = 0;
        
        for (char c : s) {
            if (c == '(') {
                left++;
            }
            else if (c == ')') {
                right++;
            }

            if (left == right) {
                maxLength = (maxLength > 2 * right) ? maxLength : (2 * right);
            }
            else if (right > left) {
                left = right = 0;
            }
        }

        left = right = 0;

        for (int i = s.size() - 1; i >= 0; i--){
            if (s[i] == ')') {
                right++;
            }
            else if (s[i] == '(') {
                left++;
            }

            if (left == right) {
                maxLength = (maxLength > 2 * left) ? maxLength : (2 * left);
            }
            else if (left > right) {
                left = right = 0;
            }
        }
        return maxLength;
    }
};