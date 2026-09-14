# 1636. Sort Array by Increasing Frequency

- **Difficulty**: Easy
- **LeetCode Link**: [1636. Sort Array by Increasing Frequency](https://leetcode.com/problems/sort-array-by-increasing-frequency/)

## Problem Statement
Given an array of integers `nums`, sort the array in increasing order based on the frequency of the values. If multiple values have the same frequency, sort them in decreasing order.

Return the sorted array.

## Solutions

### Approach 1: Frequency Map & Grouping
- **Time Complexity**: $O(N \log N + K \cdot N)$
- **Space Complexity**: $O(N)$

```cpp
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
```

---

### Approach 2: Custom Comparator (Optimal)
- **Time Complexity**: $O(N \log N)$
- **Space Complexity**: $O(N)$

```cpp
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
```
