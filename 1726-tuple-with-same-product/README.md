# 1726. Tuple with Same Product

- **Difficulty**: Medium
- **LeetCode Link**: [1726. Tuple with Same Product](https://leetcode.com/problems/tuple-with-same-product/)

## Problem Statement
Given an array `nums` of distinct positive integers, return the number of tuples `(a, b, c, d)` such that `a * b = c * d` where `a`, `b`, `c`, and `d` are elements of `nums`, and `a != b != c != d`.

## Solution

### C++ Solution (Hash Map & Combinatorics)
- **Time Complexity**: $O(N^2)$ — Generating all pairs of elements takes $O(N^2)$ time.
- **Space Complexity**: $O(N^2)$ — Storing product frequencies in the hash map takes up to $O(N^2)$ space.

```cpp
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        //phele pair find  kro
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                
                int answer=nums[i]*nums[j];
                mp[answer]++;
            }
        }
        int pairs=0;
        for(auto x:mp){
            if(x.second>1){
                //Agar k pairs hai and unhe mai 2 pairs chose lrne hai so total combination formula=k(k-1)/2
                //3 choose karne ke liye
// C(k,3) = k(k-1)(k-2)/6
// Agar k pairs mein se 4 pairs choose karne hain:
// Since 4! = 24:

// k * (k - 1) * (k - 2) * (k - 3) / 24
               int p=x.second*(x.second-1)/2;
                pairs+=p*8;
            }
        }
        return pairs;
        
        // T.C: O(N^2)
        // S.C: O(N^2)
    }
};
```
