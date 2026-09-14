// Problem: 1636. Sort Array by Increasing Frequency
// Link: https://leetcode.com/problems/sort-array-by-increasing-frequency/

#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int x : nums) {
            mp[x]++;
        }

        sort(nums.begin(), nums.end(), [&](int a, int b) {
            if (mp[a] != mp[b]) {
                return mp[a] < mp[b]; // Increasing order of frequency
            }
            return a > b; // Decreasing order of value if frequencies are equal
        });

        return nums;

        // T.C: O(N log N)
        // S.C: O(N)
    }
};
