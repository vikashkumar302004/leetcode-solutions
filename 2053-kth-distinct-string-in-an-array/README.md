# 2053. Kth Distinct String in an Array

- **Difficulty**: Easy
- **LeetCode Link**: [2053. Kth Distinct String in an Array](https://leetcode.com/problems/kth-distinct-string-in-an-array/)

## Problem Statement
A distinct string is a string that is present only once in an array.

Given an array of strings `arr`, and an integer `k`, return the $k^{th}$ distinct string that appears in `arr`. If there are fewer than `k` distinct strings, return an empty string `""`.

Note that the strings are considered in the order in which they appear in the array.

## Solution

### C++ Solution
- **Time Complexity**: $O(N^2)$
- **Space Complexity**: $O(N)$

```cpp
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        vector<string> ans;
        bool found = 0;
        for (int i = 0; i < arr.size(); i++) {
            found = 0;
            for (int j = 0; j < arr.size(); j++) {
                if (i != j) {
                    if (arr[i] == arr[j]) {
                        found = 1;
                        break;
                    }
                }
            }
            if (found == 0) {
                ans.push_back(arr[i]);
            }
        }
        string answer = "";
        int m = ans.size();
        if (k > m) {
            return answer;
        }
        answer = ans[k - 1];
        return answer;
    }
};
```
