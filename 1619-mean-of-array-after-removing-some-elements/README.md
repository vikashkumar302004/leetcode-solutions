# 1619. Mean of Array After Removing Some Elements

- **Difficulty**: Easy
- **LeetCode Link**: [1619. Mean of Array After Removing Some Elements](https://leetcode.com/problems/mean-of-array-after-removing-some-elements/)

## Problem Statement
Given an integer array `arr`, return the mean of the remaining integers after removing the smallest `5%` and the largest `5%` of the elements.

Answers within $10^{-5}$ of the actual answer will be considered accepted.

## Solution

### C++ Solution
- **Time Complexity**: $O(N \log N)$
- **Space Complexity**: $O(1)$

```cpp
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    double trimMean(vector<int>& arr) {
        // remember 
//  int sum = 10;
// int n = 4;
// double ans = sum / n;
// Yahan:
// sum / n
// 10 / 4
// Dono int hain, isliye C++ karega integer division:
// 10 / 4 = 2
// Phir:
// double ans = 2;
// So ans banega:
//2.0
        int ans=arr.size();
        int k=(5*ans)/100;
        // sort the array 
        //int / int   → integer division ❌
// double / int    → decimal division ✅
// int / double    → decimal division ✅
// double / double → decimal division ✅
        sort(arr.begin(),arr.end());
        arr.erase(arr.begin(),arr.begin()+k);
        reverse(arr.begin(),arr.end());
        arr.erase(arr.begin(),arr.begin()+k);
        double sum=0;
        int count=0;
        for(auto x:arr){
            count++;
            sum+=x;

        }
        double answer=sum/count;
        return answer;
        // T.C: O(N log N)
    }
};
```
