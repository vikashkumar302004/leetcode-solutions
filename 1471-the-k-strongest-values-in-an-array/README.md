# 1471. The k Strongest Values in an Array

- **Difficulty**: Medium
- **LeetCode Link**: [1471. The k Strongest Values in an Array](https://leetcode.com/problems/the-k-strongest-values-in-an-array/)

## Problem Statement

Given an array of integers `arr` and an integer `k`.

A value `arr[i]` is said to be stronger than a value `arr[j]` if `|arr[i] - m| > |arr[j] - m|` where `m` is the median of the array.
If `|arr[i] - m| == |arr[j] - m|`, then `arr[i]` is said to be stronger than `arr[j]` if `arr[i] > arr[j]`.

Return a list of the `k` strongest values in the array. Return the answer in **any order**.

The **median** is the middle value in an ordered integer list. More formally, if the length of the list is `n`, the median is the element in position `((n - 1) / 2)` in the sorted list (**0-indexed**).

## Solutions

### Approach 1: Brute Force
- **File**: [`01_brute_force.cpp`](./01_brute_force.cpp)
- **Time Complexity**: $O(N \log N + K \times N)$
- **Space Complexity**: $O(N)$

```cpp
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int mid = ((n - 1) / 2);
      
        int mid2 = arr[mid];
        vector<int> temp;
        for (auto x : arr) {
            int diff = abs(x - mid2);
            temp.push_back(diff);
        }
        vector<int> ans;
        unordered_map<int, int> mp;
        while (k) {
            int largest = INT_MIN;
            int index = 0;
            
            for (int i = temp.size() - 1; i >= 0; i--) {
                if (mp[i] == 0) {
                    if (largest < temp[i]) {
                        largest = temp[i];
                        index = i;
                    }
                }
            }
            mp[index] = 1;
            int m = arr[index];
            ans.push_back(m);
            k--;
        }
        return ans;
    }
};
```

---

### Approach 2: Two Pointers
- **File**: [`02_two_pointers.cpp`](./02_two_pointers.cpp)
- **Time Complexity**: $O(N \log N)$
- **Space Complexity**: $O(N)$

```cpp
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        int n=arr.size();
          sort(arr.begin(),arr.end());
        int mid=((n - 1) / 2);
      
        int mid2=arr[mid];
        vector<int>temp;
        // phele differnec array bana lo ek okay 
        for(auto x:arr){
            int diff=abs(x-mid2);
            temp.push_back(diff);
        }
        vector<int>ans;
        int start=0;int end=n-1;

        while(k){
            // two pointe rapproach:
            // sorted array hai so median se jo jitna dur hoga utna jayda differnec hoga 
            // sbse pehel end and a\start se check kro 
            // if end ka differnec jayda hai toh end -- krdo pysh krke and same for start jayda hai toh push krdo and start++ and equal hai toh end ko krdo minus push krek
            if(temp[start]<temp[end]){
                ans.push_back(arr[end]);
                k--;
                end--;
            }
            else if(temp[start]>temp[end]){
                ans.push_back(arr[start]);
                start++;
                k--;
            }
            else{
                ans.push_back(arr[end]);
                end--;k--;
            }

        }
        return ans;

        // T.C: O(N log N)
        // S.C: O(N)
    }
};
```
