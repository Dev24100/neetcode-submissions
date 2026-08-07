/* Given an integer array nums, return true if any value appears more 
than once in the array, otherwise return false. */
    


class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_set<int> seen;

        for (int num : nums) {

            if (seen.count(num)) {
                return true;
            }

            seen.insert(num);
        }
        
         return false;
  
    }
       
    
};
