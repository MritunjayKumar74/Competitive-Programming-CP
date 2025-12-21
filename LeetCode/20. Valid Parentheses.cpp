class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        unordered_map<char, char> map = {{')', '('}, {']', '['}, {'}', '{'}};
        for(char x:s){
            if(map.find(x) == map.end()){
                stack.push(x);
            }
            else if (!stack.empty() && map[x] == stack.top()){
                stack.pop();
            }
            else{
                return false;
            }
            
        }
        return stack.empty();
    }
};