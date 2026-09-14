// Problem: 1636. Sort Array by Increasing Frequency
// Link: https://leetcode.com/problems/sort-array-by-increasing-frequency/

#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> ans;
        for(auto x : nums) {
            mp[x]++;
        }
        int maxium_freq = -1;
        for(auto x : mp) {
           maxium_freq = max(maxium_freq, x.second);
        }
        int temp = 1;
        sort(nums.begin(), nums.end(), greater<int>());

        while(temp <= maxium_freq) {
            for(auto x : nums) {
                if(mp[x] == temp) {
                    ans.push_back(x);
                }
            }
            temp++;
        }
        return ans;

        // T.C: O(N log N + K * N)
        // S.C: O(N)
    }
};
