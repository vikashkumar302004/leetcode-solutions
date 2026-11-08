// Problem: 1920. Build Array from Permutation
// Link: https://leetcode.com/problems/build-array-from-permutation/

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        //create an array ans
        vector<int>ans(nums.size());
        //traverse whole array
        for(int i=0;i<nums.size();i++){
            ans[i]=nums[nums[i]];
        }
     return ans;
     
     // T.C: O(N)
     // S.C: O(N)
    }
};
