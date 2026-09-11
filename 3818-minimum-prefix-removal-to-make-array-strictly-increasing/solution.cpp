// Problem: 3818. Minimum Prefix Removal to Make Array Strictly Increasing
// Link: https://leetcode.com/problems/minimum-prefix-removal-to-make-array-strictly-increasing/

#include <vector>
using namespace std;

class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        int i=nums.size()-1;
        while(i && nums[i]>nums[i-1]){
            i--;
        }
        return i;
    }
};

// T.C: O(N)
// S.C: O(1)
