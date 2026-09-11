# 80. Remove Duplicates from Sorted Array II

- **Difficulty**: Medium
- **LeetCode Link**: [80. Remove Duplicates from Sorted Array II](https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/)

## Problem Statement
Given an integer array `nums` sorted in **non-decreasing order**, remove some duplicates **in-place** such that each unique element appears **at most twice**. The **relative order** of the elements should be kept the same.

Return *the number of elements in* `nums` *after removing the duplicates*.

## Solution

### C++ Solution (Hash Map)
- **Time Complexity**: $O(N)$ — Single pass through array and map iteration.
- **Space Complexity**: $O(N)$ — Auxiliary hash map to keep track of element frequencies.

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
            if(mp[nums[i]]==0 || mp[nums[i]]==1){
                nums[j]=nums[i];
                j++;
                mp[nums[i]]++;
            }
        }
        int sum=0;
        for(auto x:mp){
            sum+=x.second;
        }
        return sum;
        
        // T.C: O(N)
        // S.C: O(N)
    }
};
```
