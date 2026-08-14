#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

/*
 * Problem: 1. Two Sum
 * Difficulty: Easy
 * Topic: Arrays, Hash Map
 *
 * LeetCode:
 * https://leetcode.com/problems/two-sum/
 *
 * Brute Force Approach:
 * - Check every possible pair of elements.
 * - Time Complexity: O(n²)
 * - Space Complexity: O(1)
 *
 * Optimal Approach:
 * - Store previously seen numbers in a hash map.
 * - For each number, check if its complement exists.
 *
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap; // Stores <number, index>
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            
            // Check if complement already exists in map
            if (numMap.count(complement)) {
                return {numMap[complement], i};
            }
            
            // Store current number with its index
            numMap[nums[i]] = i;
        }
        
        return {};
    }
};