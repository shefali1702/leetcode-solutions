#include <string>
#include <unordered_map>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        if (s.length() != t.length()) return false;

        std::unordered_map<char, int> mapS;
        std::unordered_map<char, int> mapT;

        // Build map for string s
        for (char c : s) {
            mapS[c]++;
        }

        // Build map for string t
        for (char c : t) {
            mapT[c]++;
        }

        // C++ maps automatically check if both have identical keys and values
        return mapS == mapT;
    }
};