#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        
        for (int i : nums) {
            // If the number is already in the set, we found a duplicate!
            if (seen.count(i)) {
                return true;
            }
            // Otherwise, add it to the set and keep checking
            seen.insert(i);
        }
        
        // If the loop finishes without finding duplicates
        return false;
    }
};