class Solution {
public:
    bool isValid(std::string s) {
        int n = s.length();
        char stack[10000];
        int top = -1;

        for (int i = 0; i < n; ++i) {
            char c = s[i];
            
            if (c == '(' || c == '{' || c == '[') {
                top++;
                stack[top] = c;
            } else {
                if (top == -1) return false;

                char topChar = stack[top];
                if ((c == ')' && topChar == '(') ||
                    (c == '}' && topChar == '{') ||
                    (c == ']' && topChar == '[')) {
                    top--;
                } else {
                    return false;
                }
            }
        }
        return top == -1;
    }
};
