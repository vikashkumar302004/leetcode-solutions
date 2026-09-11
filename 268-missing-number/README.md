# 268. Missing Number

- **Difficulty**: Easy
- **LeetCode Link**: [268. Missing Number](https://leetcode.com/problems/missing-number/)

## Problem Statement
Given an array `nums` containing `n` distinct numbers in the range `[0, n]`, return *the only number in the range that is missing from the array*.

## Solutions

### Approach 1: Sorting
- **File**: [`01_sorting.cpp`](./01_sorting.cpp)
- **Time Complexity**: $O(N \log N)$ — Sorting the array takes $O(N \log N)$ time.
- **Space Complexity**: $O(1)$ — Auxiliary space.

```cpp
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // approach 1:
        //loop chlao 0 se n tk and jo i ke equal nhi hau vhi osluiton hoga
        int answer=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i!=nums[i]){
                return i;
            }
        }
        return answer;
        
        // T.C: O(N log N)
        // S.C: O(1)
    }
};
```

---

### Approach 2: Math (Sum Formula)
- **File**: [`02_sum_math.cpp`](./02_sum_math.cpp)
- **Time Complexity**: $O(N)$ — Single pass to calculate actual sum.
- **Space Complexity**: $O(1)$ — Constant space.

```cpp
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();int actualsum=0;
        int sum=n*(n+1)/2;
        for(int i=0;i<nums.size();i++){
            actualsum=nums[i]+actualsum;
        }
        return sum-actualsum;
        
        // T.C: O(N)
        // S.C: O(1)
    }
};
```
