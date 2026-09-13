# 75. Sort Colors

- **Difficulty**: Medium
- **LeetCode Link**: [75. Sort Colors](https://leetcode.com/problems/sort-colors/)

## Problem Statement
Given an array `nums` with `n` objects colored red, white, or blue, sort them **in-place** so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers `0`, `1`, and `2` to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

## Solutions

### Approach 1: Counting / Hash Map
- **File**: [`01_counting_map.cpp`](./01_counting_map.cpp)
- **Time Complexity**: $O(N)$ — Frequency counting pass and array overwriting pass.
- **Space Complexity**: $O(1)$ — Stores frequency of at most 3 unique elements.

```cpp
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        for(int i=0;i<nums.size();i++){
            if(mp[0]!=0){
                nums[i]=0;
                mp[0]--;
            }
            else if(mp[1]!=0){
                nums[i]=1;
                mp[1]--;
            }
            else{
                nums[i]=2;

            }
        }

        // T.C: O(N)
        // S.C: O(1)
    }
};
```

---

### Approach 2: Dutch National Flag (DNF) Algorithm (Optimal 3-Pointer)
- **File**: [`02_dnf_optimal.cpp`](./02_dnf_optimal.cpp)
- **Time Complexity**: $O(N)$ — Single pass 3-pointer partition algorithm.
- **Space Complexity**: $O(1)$ — In-place swap sorting.

```cpp
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;

        while(mid<=high){
            
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{

                swap(nums[mid],nums[high]);
                high--;
            }
        }

        // T.C: O(N)
        // S.C: O(1)
    }
};
```
