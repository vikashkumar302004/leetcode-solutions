# 2023. Number of Pairs of Strings With Concatenation Equal to Target

- **Difficulty**: Medium
- **LeetCode Link**: [2023. Number of Pairs of Strings With Concatenation Equal to Target](https://leetcode.com/problems/number-of-pairs-of-strings-with-concatenation-equal-to-target/)

## Problem Statement
Given an array of digit strings `nums` and a digit string `target`, return the number of pairs of indices `(i, j)` (where `i != j`) such that the concatenation of `nums[i] + nums[j]` equals `target`.

## Solution

### C++ Solution
- **Time Complexity**: $O(N^2 \cdot L)$ where $N$ is the length of `nums` and $L$ is the length of `target`.
- **Space Complexity**: $O(L)$ auxiliary space for string concatenation.

```cpp
// Problem: 2023. Number of Pairs of Strings With Concatenation Equal to Target
// Link: https://leetcode.com/problems/number-of-pairs-of-strings-with-concatenation-equal-to-target/

#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int count=0;
        
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
               
                if(nums[i]+nums[j]==target && i!=j){
                    count++;
                }
            }
        }
        return count;
        
    }
};
```
