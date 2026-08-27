# 2206. Divide Array Into Equal Pairs

- **Difficulty**: Easy
- **LeetCode Link**: [2206. Divide Array Into Equal Pairs](https://leetcode.com/problems/divide-array-into-equal-pairs/)

## Problem Statement
You are given an integer array `nums` consisting of `2 * n` integers.

You need to divide `nums` into `n` pairs such that:
- Each element belongs to exactly one pair.
- The elements present in a pair are equal.

Return `true` if `nums` can be divided into `n` pairs, otherwise return `false`.

## Solution

### C++ Solution (Hash Map Frequency Count)
- **Time Complexity**: $O(N)$
- **Space Complexity**: $O(N)$

```cpp
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        //phele frequnecy count krlo if kisi ki frequency odd aye toh 0 vrna 1
        unordered_map<int,int>mp;
        for(auto x:nums){
            mp[x]++;

        }
        for(auto x:mp){
            if(x.second%2!=0){
                return 0;
            }
        }
        return 1;
        
    }
};
```
