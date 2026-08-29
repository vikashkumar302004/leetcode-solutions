# 3159. Find Occurrences of an Element in an Array

- **Difficulty**: Medium
- **LeetCode Link**: [3159. Find Occurrences of an Element in an Array](https://leetcode.com/problems/find-occurrences-of-an-element-in-an-array/)

## Problem Statement
You are given an integer array `nums`, an integer array `queries`, and an integer `x`.

For each query `queries[i]`, you need to find the index of the `queries[i]`th occurrence of `x` in `nums`. If there are fewer than `queries[i]` occurrences of `x`, the answer for that query is `-1`.

Return an integer array `answer` containing the answers to all queries.

## Solutions

### Approach 1: Brute Force (Nested Loop)
- **File**: [`01_brute_force.cpp`](./01_brute_force.cpp)
- **Time Complexity**: $O(Q \times N)$ where $Q$ is the number of queries and $N$ is the size of `nums`
- **Space Complexity**: $O(Q)$ for storing the output array

```cpp
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int>ans;int count=0;int temp=0;bool found=0;

        for(int i=0;i<queries.size();i++){
            count=queries[i]; found=0;

            temp=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]==x){
                    temp++;

                }
                if(temp==count){
                    temp=j;
                    found=1;
                    break;
                }

            }
            if(found){
                ans.push_back(temp);
            }
            else{
                ans.push_back(-1);
            }
        }
        return ans;
        
        // T.C: O(Q * N)
        // S.C: O(Q)
    }
};
```

---

### Approach 2: Pre-indexing with Map
- **File**: [`02_optimal.cpp`](./02_optimal.cpp)
- **Time Complexity**: $O(N \log K + Q)$ where $K$ is the number of occurrences of `x`
- **Space Complexity**: $O(K + Q)$

```cpp
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        map<int,int>mp;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x){
                mp[i]=x;
                count++;
            }
        }
        
        vector<int>ans;
        for(auto y:mp){
            if(y.second==x){
                ans.push_back(y.first);
            }
        }
        vector<int>realanswer;
        int j=0;

        for(int i=0;i<queries.size();i++){
            if(queries[i]<=count){
                int k=queries[i];
                int temp=ans[k-1];
                realanswer.push_back(temp);
                
            }
            else{
                realanswer.push_back(-1);
            }
            
        }
        return realanswer;
        
        // T.C: O(N log K + Q)
        // S.C: O(K + Q)
    }
};
```

---

### Approach 3: Most Optimal Vector Indexing
- **File**: [`03_optimal_vector.cpp`](./03_optimal_vector.cpp)
- **Time Complexity**: $O(N + Q)$
- **Space Complexity**: $O(K + Q)$

```cpp
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int>pos;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x){
                pos.push_back(i);
            }
        }
        vector<int>ans;
        for(int q:queries){
            if(q<=pos.size()){
                ans.push_back(pos[q-1]);
            }
            else{
                ans.push_back(-1);
            }
        }
        return ans;
        
        // T.C: O(N + Q)
        // S.C: O(K + Q)
    }
};
```
