/* You are given two strings s and t, return true if s is a subsequence of t, or false otherwise. */

#include <string>

class Solution {
public:
    bool isSubsequence(std::string s, std::string t) {
        int i = 0; // Pointer for string s
        int j = 0; // Pointer for string t

        while (i < s.length() && j < t.length()) {
            if (s[i] == t[j]) {
                i++;
            }
            j++; // Always move pointer for t
        }

      
        return i == s.length();
    }
};
