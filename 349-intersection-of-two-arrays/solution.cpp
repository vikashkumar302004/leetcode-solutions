// Problem: 349. Intersection of Two Arrays
// Link: https://leetcode.com/problems/intersection-of-two-arrays/

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        unordered_map<int,int>mp;
        unordered_map<int,int>mp2;
        for(auto x:nums1){
            mp[x]++;
        }
        for(auto x:nums2){
            if(mp[x]!=0 && mp2[x]==0){
                ans.push_back(x);
                mp2[x]=1;
            }
        }

        return ans;

        // T.C: O(N + M)
        // S.C: O(N + M)
    }
};
