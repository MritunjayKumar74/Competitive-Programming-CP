class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> substrings;

        int maxLen = 0;
        int left = 0;

        for (int right = 0; right < s.length(); right++){
            while(substrings.count(s[right])){
                substrings.erase(s[left]);
                left++;
            }

            substrings.insert(s[right]);

            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
        
    }
};
