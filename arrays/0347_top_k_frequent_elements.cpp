class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int n = nums.size();
        
        // Fix 1: Increment frequency of the element (not the element itself)
        for (int i = 0; i < n; i++) {
            mp[nums[i]]++; 
        }

        vector<pair<int, int>> freqPairs;
        // Fix 2: Store {frequency, number} so default sort orders by frequency
        for (auto it : mp) {
            freqPairs.push_back({it.second, it.first}); 
        }

        // Sort in descending order of frequency
        sort(freqPairs.rbegin(), freqPairs.rend());

        // Extract the top k elements
        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(freqPairs[i].second);
        }

        return ans;
    }
};