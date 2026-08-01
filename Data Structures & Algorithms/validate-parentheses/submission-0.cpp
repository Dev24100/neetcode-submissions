/*
You are given a string s consisting of the following characters: '(', ')', '{', '}', '[' and ']'.

The input string s is valid if and only if:

Every open bracket is closed by the same type of close bracket.
Open brackets are closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
Return true if s is a valid string, and false otherwise.

Example 1:

Input: s = "[]"

Output: true
Example 2:

Input: s = "([{}])"

Output: true
Example 3:

Input: s = "[(])"

Output: false

*/




    



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
