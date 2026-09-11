// Problem: 229. Majority Element II
// Link: https://leetcode.com/problems/majority-element-ii/

#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
            
        }
        for(auto x:mp){
            if(x.second>nums.size()/3){
                ans.push_back(x.first);
            }
        }
        return ans;

        // T.C: O(N log N)
        // S.C: O(N)
    }
};
