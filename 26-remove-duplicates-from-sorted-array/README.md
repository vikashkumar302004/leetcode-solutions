# 26. Remove Duplicates from Sorted Array

- **Difficulty**: Easy
- **LeetCode Link**: [26. Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)

## Problem Statement
Given an integer array `nums` sorted in **non-decreasing order**, remove the duplicates **in-place** such that each unique element appears only once. The **relative order** of the elements should be kept the same. Then return *the number of unique elements in* `nums`.

## Solution

### C++ Solution (Hash Map)
- **Time Complexity**: $O(N)$ — Single pass through the array.
- **Space Complexity**: $O(N)$ — Extra space for frequency hash map.

```cpp
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int>mp;
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]==0){
                nums[j]=nums[i];
                j++;
                mp[nums[i]]++;
            }
        }
        return mp.size();
        
        // T.C: O(N)
        // S.C: O(N)
    }
};
```
