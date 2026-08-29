# 2348. Number of Zero-Filled Subarrays

- **Difficulty**: Medium
- **LeetCode Link**: [2348. Number of Zero-Filled Subarrays](https://leetcode.com/problems/number-of-zero-filled-subarrays/)

## Problem Statement
Given an integer array `nums`, return the number of **subarrays** filled with `0`.

A **subarray** is a contiguous non-empty sequence of elements within an array.

## Solutions

### Approach 1: Contiguous Zero Block Count Formula
- **File**: [`01_formula_count.cpp`](./01_formula_count.cpp)
- **Time Complexity**: $O(N)$
- **Space Complexity**: $O(1)$

```cpp
#include <vector>
using namespace std;

class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        // agar n number hai and total number of subarray find krne hai toh n(n+1)/2;
        long long count=0, pairs=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
            }
            else{
                if(count){
                    pairs+=count*(count+1)/2;
                    count=0;
                }
            }
        }
        //agar zero hi last element hua toh 
        if(count){
            pairs+=count*(count+1)/2;
        }
        return pairs;
        
        // T.C: O(N)
        // S.C: O(1)
    }
};
```

---

### Approach 2: Running Count Traversal
- **File**: [`02_running_count.cpp`](./02_running_count.cpp)
- **Time Complexity**: $O(N)$
- **Space Complexity**: $O(1)$

```cpp
#include <vector>
using namespace std;

class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long answer = 0;
        long long curr = 0;
        for(int &a : nums) {
            if(a != 0) curr = 0;
            if(a == 0) curr++;
            answer += curr;
        }
        return answer;
        
        // T.C: O(N)
        // S.C: O(1)
    }
};
```
