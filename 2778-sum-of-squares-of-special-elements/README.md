# 2778. Sum of Squares of Special Elements

- **Difficulty**: Easy
- **LeetCode Link**: [2778. Sum of Squares of Special Elements](https://leetcode.com/problems/sum-of-squares-of-special-elements/)

## Problem Statement
You are given a 1-indexed integer array `nums` of length `n`.
An element `nums[i]` of `nums` is called special if `n` is divisible by `i`.
Return the sum of the squares of all special elements of `nums`.

## Solution

### C++ Solution
- **Time Complexity**: $O(N)$
- **Space Complexity**: $O(1)$

```cpp
#include <vector>
using namespace std;

class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
      //c++=questionposition-1;

       for(int i=1;i<=n;i++){
        if(n%i==0){
        sum+=nums[i-1]*nums[i-1];
       }
       }
      
    
        return sum;
        //T.C O(N)
    }
};
```
