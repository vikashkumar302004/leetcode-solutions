# 229. Majority Element II

- **Difficulty**: Medium
- **LeetCode Link**: [229. Majority Element II](https://leetcode.com/problems/majority-element-ii/)

## Problem Statement
Given an integer array of size `n`, find all elements that appear more than `⌊ n/3 ⌋` times.

## Solution

### C++ Solution (Frequency Map)
- **Time Complexity**: $O(N \log N)$ — Building frequency map using `std::map`.
- **Space Complexity**: $O(N)$ — Storing element frequencies in map.

```cpp
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
            
        }
        for(auto x:mp){
            if(x.second>nums.size()/3){
                ans.push_back(x.first);
            }
        }
        return ans;

        // T.C: O(N log N)
        // S.C: O(N)
    }
};
```
