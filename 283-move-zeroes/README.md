# 283. Move Zeroes

- **Difficulty**: Easy
- **LeetCode Link**: [283. Move Zeroes](https://leetcode.com/problems/move-zeroes/)

## Problem Statement
Given an integer array `nums`, move all `0`'s to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

## Solution

### C++ Solution (Two Pointers)
- **Time Complexity**: $O(N)$ — Single pass through the array.
- **Space Complexity**: $O(1)$ — In-place array modification.

```cpp
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        // two pointer technique
        int j=1;
        int i=0;
        while(j<nums.size()){
            if(nums[i]==0 && nums[j]==0){
                j++;
            }
            else if(nums[i]==0 && nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
            else{
                i++;j++;
            }
        }
        
        // T.C: O(N)
        // S.C: O(1)
    }
};
```
