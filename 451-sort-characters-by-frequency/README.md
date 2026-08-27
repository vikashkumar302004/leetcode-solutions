# 451. Sort Characters By Frequency

- **Difficulty**: Medium
- **LeetCode Link**: [451. Sort Characters By Frequency](https://leetcode.com/problems/sort-characters-by-frequency/)

## Problem Statement
Given a string `s`, sort it in **decreasing order** based on the **frequency** of the characters. The **frequency** of a character is the number of times it appears in the string.

Return the sorted string. If there are multiple answers, return any of them.

## Solution

### C++ Solution
```cpp
#include <string>
#include <map>
#include <algorithm>
using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        string ans="";
        //empty strings 
        //frequency counter
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }

        int maxi=0;
        //maxium frequnxy count kro
        for(auto x:mp){
            if(x.second>maxi){
                maxi=x.second;
            }
        }
        // decreasing order mai krlo sory
        while(maxi>=1){
            for(auto x:mp){
                if(x.second==maxi){
                    for (int i=1;i<=maxi;i++){
                        ans+=x.first;

                    }
                }
            }
            maxi--;
        }
        return ans;
    }
};
```
