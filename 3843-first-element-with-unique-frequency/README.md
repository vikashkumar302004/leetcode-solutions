# 3843. First Element with Unique Frequency

- **Difficulty**: Medium
- **LeetCode Link**: [3843. First Element with Unique Frequency](https://leetcode.com/problems/first-element-with-unique-frequency/)

## Problem Statement

You are given an integer array `nums`.

An element `x` in `nums` is said to have a **unique frequency** if the frequency of `x` in `nums` is different from the frequency of all other distinct elements in `nums`.

Return the **first element** in `nums` (from left to right) that has a unique frequency. If no such element exists, return `-1`.

## Solutions

### Approach 1: Frequency & Frequency-of-Frequency (`std::map`)
- **File**: [`01_map.cpp`](./01_map.cpp)
- **Time Complexity**: $O(N \log U)$ where $N$ is the number of elements in `nums` and $U$ is the number of unique elements
- **Space Complexity**: $O(U)$ for storing frequencies in maps

```cpp
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        //phele har element ki frequncy store kro 
        map<int,int>mp;
        for(auto x:nums){
           
            mp[x]++;
        }
        //ahr element ki frequency ki frequency bhi store kro 
        map<int,int>mp2;
        
        for(auto x:mp){
            mp2[x.second]++;
            
            }
        int answer = 0;
        for(int i=0;i<nums.size();i++){
            // check krlo ki jis element ki frequency ki freuqncy 1 tlb unique ho toh return rkdo vrna -1 krdo
            if(mp2[mp[nums[i]]]==1){
                answer=nums[i];
               return answer;
            }
        }
        return -1;

        // T.C: O(N log U)
        // S.C: O(U)
    }
};
```

---

### Approach 2: Using `std::unordered_map` (Optimal)
- **File**: [`02_unordered_map.cpp`](./02_unordered_map.cpp)
- **Time Complexity**: $O(N)$ average time complexity
- **Space Complexity**: $O(U)$ auxiliary space

```cpp
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        //phele har element ki frequncy store kro 
        // yha data sorted nhi hai so unordered map use kro
        unordered_map<int,int>mp;
        for(auto x:nums){
           
            mp[x]++;
        }
        //ahr element ki frequency ki frequency bhi store kro 
        unordered_map<int,int>mp2;
        
        for(auto x:mp){
            mp2[x.second]++;
            
            }
        int answer = 0;
        for(int i=0;i<nums.size();i++){
            // check krlo ki jis element ki frequency ki freuqncy 1 tlb unique ho toh return rkdo vrna -1
            if(mp2[mp[nums[i]]]==1){
                answer=nums[i];
               return answer;
            }
        }
        return -1;

        // T.C: O(N) average
        // S.C: O(U)
    }
};
```

## Complexity Analysis

| Approach | Time Complexity | Space Complexity |
| --- | --- | --- |
| **Approach 1 (`std::map`)** | $O(N \log U)$ | $O(U)$ |
| **Approach 2 (`std::unordered_map`)** | $O(N)$ average | $O(U)$ |
