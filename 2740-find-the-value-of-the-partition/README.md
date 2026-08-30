# 2740. Find the Value of the Partition

- **Difficulty**: Medium
- **LeetCode Link**: [2740. Find the Value of the Partition](https://leetcode.com/problems/find-the-value-of-the-partition/)

## Problem Statement
You are given a positive integer array `nums`.

Partition `nums` into two arrays, `nums1` and `nums2`, such that:
- Each element of the array `nums` belongs to either the array `nums1` or the array `nums2`.
- Both arrays `nums1` and `nums2` are non-empty.
- The value of the partition is minimized.

The value of the partition is `|max(nums1) - min(nums2)|`, where `max(nums1)` denotes the maximum element of the array `nums1`, and `min(nums2)` denotes the minimum element of the array `nums2`.

Return the integer denoting the value of such partition.

## Solution

### C++ Solution (Sorting Approach)
- **Time Complexity**: $O(N \log N)$ — Sorting the array takes $O(N \log N)$ time, followed by a single linear scan $O(N)$.
- **Space Complexity**: $O(1)$ auxiliary space (or $O(\log N)$ for recursion stack during sorting).

```cpp
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        //difference minimum tab hoga jab 2 numbers ek-dusre ke sabse close hon.
        sort(nums.begin(),nums.end());
        int diference=INT_MAX;
        for(int i=0;i<nums.size()-1;i++){
            if((nums[i+1]-nums[i])<diference){
                diference=nums[i+1]-nums[i];
            }
        }
        return diference;
        
        // T.C: O(N log N)
        // S.C: O(1)
    }
};
```
