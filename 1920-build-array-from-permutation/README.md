# 1920. Build Array from Permutation

- **Difficulty**: Easy
- **LeetCode Link**: [1920. Build Array from Permutation](https://leetcode.com/problems/build-array-from-permutation/)

## Problem Statement
Given a **zero-based permutation** `nums` (0-indexed), build an array `ans` of the **same length** where `ans[i] = nums[nums[i]]` for each `0 <= i < nums.length` and return it.

A **zero-based permutation** `nums` is an array of **distinct** integers from `0` to `nums.length - 1` (inclusive).

## Solution

### C++ Solution
- **Time Complexity**: $O(N)$
- **Space Complexity**: $O(N)$

```cpp
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        //create an array ans
        vector<int>ans(nums.size());
        //traverse whole array
        for(int i=0;i<nums.size();i++){
            ans[i]=nums[nums[i]];
        }
     return ans;
     
     // T.C: O(N)
     // S.C: O(N)
    }
};
```
