# 890. Find and Replace Pattern

- **Difficulty**: Medium
- **LeetCode Link**: [890. Find and Replace Pattern](https://leetcode.com/problems/find-and-replace-pattern/)

## Problem Statement
Given a list of strings `words` and a string `pattern`, return a list of `words[i]` that match `pattern`. You may return the answer in **any order**.

A word matches the pattern if there exists a permutation of letters `p` so that after replacing every letter `x` in the pattern with `p(x)`, we get the desired word.

Recall that a letter maps to another letter with a bijection: no two letters map to the same letter, and no letter maps to two different letters.

## Solution

### C++ Solution
- **Time Complexity**: $O(N \cdot K^2)$ where $N$ is the number of words and $K$ is the length of each word.
- **Space Complexity**: $O(1)$ auxiliary space.

```cpp
// Problem: 890. Find and Replace Pattern
// Link: https://leetcode.com/problems/find-and-replace-pattern/

#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;int found=0;
        // phele answer vector bnalo string type ki
        for(int i=0;i<words.size();i++){
            int j=0;found=0;string temp=words[i];
            while(j<pattern.size()){
                // how its works
                //a ka phela index=0 ,a=0,
                //b=1,b=1,
                //c=2,b=1 so abc not counted
                if(pattern.find(pattern[j])==temp.find(temp[j])){
                    j++;
                }else{
                    found=1;
                    break;
                }
            }
            if(found==0){
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};
```
