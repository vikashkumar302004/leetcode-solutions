# 350. Intersection of Two Arrays II

- **Difficulty**: Easy
- **LeetCode Link**: [350. Intersection of Two Arrays II](https://leetcode.com/problems/intersection-of-two-arrays-ii/)

## Problem Statement
Given two integer arrays `nums1` and `nums2`, return *an array of their intersection*. Each element in the result must appear as many times as it shows in both arrays and you may return the result in **any order**.

## Solution

### C++ Solution (Hash Map / Frequency Counter)
- **Time Complexity**: $O(N + M)$ — Where $N$ is the size of `nums1` and $M$ is the size of `nums2`.
- **Space Complexity**: $O(N + M)$ — For storing element frequencies and tracking match counts.

```cpp
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        //map banao
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;

        for(auto x:nums1){
            mp1[x]++;
        }
        vector<int>ans;
        for(auto x:nums2){
            if(mp1[x]!=0 && mp2[x]<mp1[x]){
                ans.push_back(x);
                mp2[x]++;
            }

        }
        return ans;
        
        // T.C: O(N + M)
        // S.C: O(N + M)
    }
};
```
