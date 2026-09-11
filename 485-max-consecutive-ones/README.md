# 485. Max Consecutive Ones

- **Difficulty**: Easy
- **LeetCode Link**: [485. Max Consecutive Ones](https://leetcode.com/problems/max-consecutive-ones/)

## Problem Statement
Given a binary array `nums`, return *the maximum number of consecutive* `1`'s *in the array*.

## Solution

### C++ Solution
- **Time Complexity**: $O(N)$ — Single pass traversal.
- **Space Complexity**: $O(1)$ — Auxiliary variables only.

```cpp
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxium=0;
        for(auto x:nums){
            if(x==1){
                count++;
            }
            else if(x==0){
                count=0;
            }
            if(maxium<count){
                maxium=count;
            }


        }
        return maxium;
        
        // T.C: O(N)
        // S.C: O(1)
    }
};
```
