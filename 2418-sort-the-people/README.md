# 2418. Sort the People

- **Difficulty**: Easy
- **LeetCode Link**: [2418. Sort the People](https://leetcode.com/problems/sort-the-people/)

## Problem Statement
You are given an array of strings `names`, and an array `heights` that consists of **distinct** positive integers. Both arrays are of length `n`.

For each index `i`, `names[i]` and `heights[i]` denote the name and height of the $i^{th}$ person.

Return `names` sorted in **descending** order by the people's heights.

## Solution

### C++ Solution (Map with Greater Comparator)
- **Time Complexity**: $O(N \log N)$
- **Space Complexity**: $O(N)$

```cpp
#include <vector>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string,greater<int>>mp;
        // descending order mai krlo store heights map mai and us according print krdo names
        vector<string>ans;
        for(int i=0;i<heights.size();i++){
            string temp=names[i];
            mp[heights[i]]=temp;
        }
        for(auto x:mp){
            ans.push_back(x.second);
        }
        return ans;
        //T.C O(N log N)
    }
};
```
