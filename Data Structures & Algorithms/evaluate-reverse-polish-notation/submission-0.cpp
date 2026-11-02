/*     You are given an array of strings tokens that represents a valid arithmetic expression in Reverse Polish Notation.

Return the integer that represents the evaluation of the expression.

The operands may be integers or the results of other operations.
The operators include '+', '-', '*', and '/'.
Assume that division between integers always truncates toward zero.  */


class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        
        for (const string& token : tokens) {
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                // Pop the top two elements
                int b = st.top(); 
                st.pop();
                int a = st.top(); 
                st.pop();
                
                // Perform the operation and push the result back
                if (token == "+") {
                    st.push(a + b);
                } else if (token == "-") {
                    st.push(a - b);
                } else if (token == "*") {
                    st.push(a * b);
                } else if (token == "/") {
                    st.push(a / b); // C++ integer division naturally truncates toward zero
                }
            } else {
                // If the token is a number, convert it to an integer and push it
                st.push(stoi(token));
            }
        }
        
        return st.top();
    }
};