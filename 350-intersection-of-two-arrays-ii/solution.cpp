// Problem: 350. Intersection of Two Arrays II
// Link: https://leetcode.com/problems/intersection-of-two-arrays-ii/

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        //map banao
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;

        for(auto x:nums1){
            mp1[x]++;
        }
        vector<int>ans;
        for(auto x:nums2){
            if(mp1[x]!=0 && mp2[x]<mp1[x]){
                ans.push_back(x);
                mp2[x]++;
            }

        }
        return ans;
        
        // T.C: O(N + M)
        // S.C: O(N + M)
    }
};
