#include<vector>
#include<unordered_set>
#include<algorithm>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int maxi = 0;

        // Iterating over the set automatically skips duplicate values
        for (int num : st) {
            if (!st.count(num - 1)) {
                int currentNum = num;
                int count = 1;

                while (st.count(currentNum + 1)) {
                    currentNum++;
                    count++;
                }

                maxi = max(maxi, count);
            }
        }

        return maxi;
    }
};