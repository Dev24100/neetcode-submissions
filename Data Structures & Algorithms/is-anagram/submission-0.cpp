/* Given two strings s and t, return true if the two strings are anagrams of each other, otherwise return false.   */

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
       
        if (s.length() != t.length())
        {
            return false;
        }

        
        int count[26] = {0};

        
        for (int i = 0; i < s.length(); i++)
        {
            count[s[i] - 'a']++;
        }

       
        for (int i = 0; i < t.length(); i++)
        {
            count[t[i] - 'a']--;
        }

      
        for (int i = 0; i < 26; i++)
        {
            if (count[i] != 0)
            {
                return false;
            }
        }

        return true;
    }
};