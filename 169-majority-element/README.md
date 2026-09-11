# 169. Majority Element

- **Difficulty**: Easy
- **LeetCode Link**: [169. Majority Element](https://leetcode.com/problems/majority-element/)

## Problem Statement
Given an array `nums` of size `n`, return *the majority element*.

The majority element is the element that appears more than `⌊n / 2⌋` times. You may assume that the majority element always exists in the array.

## Solution

### C++ Solution (Sorting)
- **Time Complexity**: $O(N \log N)$ — Sorting the array.
- **Space Complexity**: $O(1)$ — Constant space.

```cpp
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
        
        // T.C: O(N log N)
        // S.C: O(1)
    }
};
```
