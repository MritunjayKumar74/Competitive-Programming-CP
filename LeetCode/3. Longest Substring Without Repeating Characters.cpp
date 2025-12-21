class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<string> lst;
        int maxLen = 0;
        int n = s.length();

        for (int i = 0; i < n; i++) {
            string w = "";
            for (int j = i; j < n; j++) {
                if (w.find(s[j]) == string::npos) {
                    w += s[j];
                } else {
                    break;
                }
            }
            lst.push_back(w);
        }

        for (auto &x : lst) {
            if ((int)x.length() > maxLen) {
                maxLen = x.length();
            }
        }
        return maxLen;
    }
};