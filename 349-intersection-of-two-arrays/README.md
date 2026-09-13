# 349. Intersection of Two Arrays

- **Difficulty**: Easy
- **LeetCode Link**: [349. Intersection of Two Arrays](https://leetcode.com/problems/intersection-of-two-arrays/)

## Problem Statement
Given two integer arrays `nums1` and `nums2`, return *an array of their intersection*. Each element in the result must be **unique** and you may return the result in **any order**.

## Solution

### C++ Solution (Hash Map / Frequency Counter)
- **Time Complexity**: $O(N + M)$ — Where $N$ is the size of `nums1` and $M$ is the size of `nums2`.
- **Space Complexity**: $O(N + M)$ — For storing frequency maps and tracking visited intersection elements.

```cpp
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        unordered_map<int,int>mp;
        unordered_map<int,int>mp2;
        for(auto x:nums1){
            mp[x]++;
        }
        for(auto x:nums2){
            if(mp[x]!=0 && mp2[x]==0){
                ans.push_back(x);
                mp2[x]=1;
            }
        }

        return ans;

        // T.C: O(N + M)
        // S.C: O(N + M)
    }
};
```
