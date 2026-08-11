/* You are given an array of characters which represents a string s. Write a function which reverses a string. */

class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> tmp;
        for (int i = s.size() - 1; i >= 0; i--) {
            tmp.push_back(s[i]);
        }
        for (int i = 0; i < s.size(); i++) {
            s[i] = tmp[i];
        }
    }
};