# 3818. Minimum Prefix Removal to Make Array Strictly Increasing

- **Difficulty**: Easy
- **LeetCode Link**: [3818. Minimum Prefix Removal to Make Array Strictly Increasing](https://leetcode.com/problems/minimum-prefix-removal-to-make-array-strictly-increasing/)

## Problem Statement
Given an integer array `nums`, return the minimum length of a prefix that needs to be removed so that the remaining array becomes strictly increasing.

## Solution

### C++ Solution
- **Time Complexity**: $O(N)$
- **Space Complexity**: $O(1)$

```cpp
#include <vector>
using namespace std;

class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        int i=nums.size()-1;
        while(i && nums[i]>nums[i-1]){
            i--;
        }
        return i;
    }
};
```
