# 2190. Most Frequent Number Following Key In an Array

- **Difficulty**: Easy
- **LeetCode Link**: [2190. Most Frequent Number Following Key In an Array](https://leetcode.com/problems/most-frequent-number-following-key-in-an-array/)

## Problem Statement
You are given a 0-indexed integer array `nums`. You are also given an integer `key`, which is present in `nums`.

For every unique integer `target` in `nums`, count the number of times `target` immediately follows an occurrence of `key` in `nums`. In other words, count the number of indices `i` such that `0 <= i <= nums.length - 2`, `nums[i] == key` and `nums[i + 1] == target`.

Return the `target` with the **maximum** count. The test cases will be generated such that the `target` with maximum count is unique.

## Solution

### C++ Solution
- **Time Complexity**: $O(N)$
- **Space Complexity**: $O(N)$

```cpp
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        // unique mtlb different intege
        vector<int>ans;
        unordered_map<int,int>mp;
        int maxi=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==key){
                ans.push_back(nums[i+1]);
                mp[nums[i+1]]++;
                if(maxi<mp[nums[i+1]]){
                    maxi=mp[nums[i+1]];
                    // one guideline for eveyone do not use gpt for debugging ,use pen apper  i made mistake during my preparation ..
                }


            }
        }
        int answer=0;
        for(auto x:ans){
            if(mp[x]==maxi){
                answer=x;
                return answer;
            }
        }
        return answer;
        //T.C O(N)
    }
};
```
