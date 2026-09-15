# 992. Subarrays with K Different Integers

- **Difficulty**: Hard
- **LeetCode Link**: [992. Subarrays with K Different Integers](https://leetcode.com/problems/subarrays-with-k-different-integers/)

## Problem Statement

Given an integer array `nums` and an integer `k`, return *the number of **good subarrays** of* `nums`.

A **good array** is an array where the number of different integers in that array is exactly `k`.

- For example, `[1,2,3,1,2]` has `3` different integers: `1`, `2`, and `3`.

A **subarray** is a **contiguous** part of an array.

## Solution

### Brute Force Approach
- **Time Complexity**: $O(N^2)$ — Iterating through all possible starting and ending indices, stopping when unique elements exceed `k`.
- **Space Complexity**: $O(K)$ — Storing up to `k + 1` unique elements in `unordered_set`.

```cpp
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        unordered_set<int> s;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            s.clear(); 
            for (int j = i; j < nums.size(); j++) {
                s.insert(nums[j]);
                if (s.size() > k) {
                    break;
                }
                if (s.size() == k) {
                    count++;
                }
            }
        }
        return count;

        // T.C: O(N^2)
        // S.C: O(K)
    }
};
```
