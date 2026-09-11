# 1630. Arithmetic Subarrays

- **Difficulty**: Medium
- **LeetCode Link**: [1630. Arithmetic Subarrays](https://leetcode.com/problems/arithmetic-subarrays/)

## Problem Statement
A sequence of numbers is called arithmetic if it consists of at least two elements and the difference between every two consecutive elements is the same. Formally, a sequence `s` is arithmetic if and only if `s[i+1] - s[i] == s[1] - s[0]` for all valid `i`.

You are given an array of `n` integers `nums`, and two arrays of `m` integers each, `l` and `r`, representing the `m` range queries, where the `i-th` query has the range `[l[i], r[i]]`. All the arrays are 0-indexed.

Return a list of boolean elements `answer`, where `answer[i]` is `true` if the subarray `nums[l[i]], nums[l[i]+1], ..., nums[r[i]]` can be rearranged to form an arithmetic sequence, and `false` otherwise.

## Solution

### C++ Solution
- **Time Complexity**: $O(m \times K \log K)$, where $m$ is `l.size()` and $K$ is the length of subarray ($r[i] - l[i] + 1$).
- **Space Complexity**: $O(K)$, for storing subarray elements in `temp`.

```cpp
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int i=0;vector<int>temp;vector<bool>ans;
        int found=0;
        int m=l.size();

        while(i<m){
            for(int j=l[i];j<=r[i];j++){
                found=0;
                temp.push_back(nums[j]);
            }
            sort(temp.begin(),temp.end());
            int diff=temp[1]-temp[0];
            for(int k=1;k<temp.size();k++){
                if((temp[k]-temp[k-1])!=diff){
                    found=1;
                    break;
                }
            }
            if(found){
                ans.push_back(false);

            }
            else{
                ans.push_back(true);
            }
            temp.clear();
            i++;

            }
        return ans;
        
        // T.C: O(m * K log K), where m = l.size() and K is the length of subarray (r[i] - l[i] + 1)
        // S.C: O(K) for storing subarray elements in temp
    }
};
```
