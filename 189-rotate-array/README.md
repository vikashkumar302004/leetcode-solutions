# 189. Rotate Array

- **Difficulty**: Medium
- **LeetCode Link**: [189. Rotate Array](https://leetcode.com/problems/rotate-array/)

## Problem Statement
Given an integer array `nums`, rotate the array to the right by `k` steps, where `k` is non-negative.

## Solutions

### Approach 1: Brute Force (Shift by 1 element K times)
- **File**: [`01_brute_force.cpp`](./01_brute_force.cpp)
- **Time Complexity**: $O(N \cdot K)$ — Shifting array right by 1 position $K$ times (Gives TLE for large inputs).
- **Space Complexity**: $O(1)$ — In-place rotation using a single temporary variable.

```cpp
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int m=0;
        if(k>0){
        m=nums.size()%k;}

        if(m<k){
        
            m=k;
        }
        int temp=nums[nums.size()-1];
        while(m){
            for(int i=nums.size()-1;i>0;i--){
                nums[i]=nums[i-1];
            }
            nums[0]=temp;
            temp=nums[nums.size()-1]; 
            m--;


        }
        
        // T.C: O(N * K) (Gives TLE)
        // S.C: O(1)
    }
};
```
