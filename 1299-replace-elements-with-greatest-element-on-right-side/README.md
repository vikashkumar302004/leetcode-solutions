# 1299. Replace Elements with Greatest Element on Right Side

- **Difficulty**: Easy
- **LeetCode Link**: [1299. Replace Elements with Greatest Element on Right Side](https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/)

## Problem Statement
Given an array `arr`, replace every element in that array with the greatest element among the elements to its right, and replace the last element with `-1`.

After doing so, return the array.

## Solutions

### Approach 1: Brute Force (Nested Loop)
- **File**: [`01_brute_force.cpp`](./01_brute_force.cpp)
- **Time Complexity**: $O(N^2)$
- **Space Complexity**: $O(N)$

```cpp
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>b;
        if(arr.size()==1){
            b.push_back(-1);
            return b;
        }
        for(int i=0;i<arr.size()-1;i++){
            int max=INT_MIN;
            for(int j=i+1;j<arr.size();j++){
                if(arr[j]>max){
                    max=arr[j];
                }
            }
            b.push_back(max);
        }
        b.push_back(-1);
        return b;
        
        // T.C: O(N^2)
        // S.C: O(N)
    }
};
```

---

### Approach 2: Using `std::max_element`
- **File**: [`02_using_max_element.cpp`](./02_using_max_element.cpp)
- **Time Complexity**: $O(N^2)$
- **Space Complexity**: $O(N)$

```cpp
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>ans;
        if(arr.size()==1){
            ans.push_back(-1);
            return ans;
        }
        for(int i=1;i<arr.size();i++){
            int maxium=*max_element(arr.begin()+i,arr.end());
            ans.push_back(maxium);
        }
        ans.push_back(-1);
        return ans;
        
        // T.C: O(N^2)
        // S.C: O(N)
    }
};
```
