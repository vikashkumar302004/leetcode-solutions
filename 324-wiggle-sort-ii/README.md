# 324. Wiggle Sort II

- **Difficulty**: Medium
- **LeetCode Link**: [324. Wiggle Sort II](https://leetcode.com/problems/wiggle-sort-ii/)

## Problem Statement
Given an integer array `nums`, reorder it such that `nums[0] < nums[1] > nums[2] < nums[3]...`.

## Solution

### C++ Solution
- **Time Complexity**: $O(N \log N)$ — Sorting the array.
- **Space Complexity**: $O(N)$ — Storing elements in a temporary array.

```cpp
class Solution {
public:
    void wiggleSort(vector<int>& nums) {
         vector<int>temp;
         sort(nums.begin(),nums.end());
         for(auto x:nums){
            temp.push_back(x);
         }
         int i;
         if(nums.size()%2==0){
            i=nums.size()/2-1;
         }
         else{
             i=nums.size()/2;
         }
    
        int j=nums.size()-1;
        

        
        for(int k=0;k<nums.size();k++){
            if(k%2==0){
                nums[k]=temp[i];
                i--;
            }
            else{
                nums[k]=temp[j];
                j--;
            }
        }

        // T.C: O(N log N)
        // S.C: O(N)
    }
};
```
