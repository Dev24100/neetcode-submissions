/*  Given a string s, return true if it is a palindrome, otherwise return false. */

A palindrome is a string that reads the same forward and backward. It is also case-insensitive and ignores all non-alphanumeric characters.
    
    class Solution {
public:
    bool isPalindrome(string s) {

        int left = 0;
        int right = s.size() - 1;

        while (left < right) {

            // Skip non-alphanumeric from left
            if (!isalnum(s[left])) {
                left++;
                continue;
            }

            // Skip non-alphanumeric from right
            if (!isalnum(s[right])) {
                right--;
                continue;
            }

            // Compare ignoring case
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};
