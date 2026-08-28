# 692. Top K Frequent Words

- **Difficulty**: Medium
- **LeetCode Link**: [692. Top K Frequent Words](https://leetcode.com/problems/top-k-frequent-words/)

## Problem Statement
Given an array of strings `words` and an integer `k`, return the `k` most frequent strings.

Return the answer **sorted** by the frequency from highest to lowest. Sort the words with the same frequency by their **lexicographical order**.

## Solution

### C++ Solution
- **Time Complexity**: $O(N \log N + M \cdot U)$ where $M$ is max frequency and $U$ is unique words
- **Space Complexity**: $O(N)$

```cpp
#include <vector>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string>ans;
        // map banao
        map<string,int>mp;
        for(auto x:words){
            mp[x]++;
        }
        // find the highest frequency in map
        int maxium=0;
        for(auto x:mp){
            if(x.second>maxium){
                maxium=x.second;
            }
        }
        int i=1;
        while(maxium>0){

       
            for(auto x:mp){
                if(x.second==maxium){
                    ans.push_back(x.first);
                  

                }
            }
           maxium--;
        }
        ans.erase(ans.begin()+k,ans.end());
        return ans;
        
        // T.C: O(N log N + M * U) where M = max frequency, U = unique words
    }
};
```
