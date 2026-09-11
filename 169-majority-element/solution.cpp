// Problem: 169. Majority Element
// Link: https://leetcode.com/problems/majority-element/

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
        
        // T.C: O(N log N)
        // S.C: O(1)
    }
};
