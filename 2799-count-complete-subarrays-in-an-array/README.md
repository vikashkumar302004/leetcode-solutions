# 2799. Count Complete Subarrays in an Array

- **Difficulty**: Medium
- **LeetCode Link**: [2799. Count Complete Subarrays in an Array](https://leetcode.com/problems/count-complete-subarrays-in-an-array/)

## Problem Statement
You are given an array `nums` consisting of positive integers.

We call a subarray **complete** if the number of distinct elements in the subarray is equal to the number of distinct elements in the whole array.

Return the *number of complete subarrays*.

A **subarray** is a contiguous non-empty sequence of elements within an array.

## Solution

### C++ Solution
- **Time Complexity**: $O(N^2 \log N)$ where $N$ is the size of `nums`.
- **Space Complexity**: $O(K)$ where $K$ is the number of distinct elements in `nums`.

```cpp
// Problem: 2799. Count Complete Subarrays in an Array
// Link: https://leetcode.com/problems/count-complete-subarrays-in-an-array/

#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int count=0;
        set<int>s1;
        for(auto x:nums){
            s1.insert(x);
        }
        set<int>s2;
        for(int i=0;i<nums.size();i++){
            s2.clear();
         
            for(int j=i;j<nums.size();j++){
                s2.insert(nums[j]);
                if(s1.size()==s2.size()){
                    count++;
                }

                }
            }
        return count;
        
    }
};
```
