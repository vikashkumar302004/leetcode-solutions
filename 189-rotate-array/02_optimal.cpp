// Problem: 189. Rotate Array
// Link: https://leetcode.com/problems/rotate-array/

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
         k=k%n;
        int roat=n-k;
        reverse(nums.begin()+roat,nums.end());
        reverse(nums.begin(),nums.begin()+roat);
        reverse(nums.begin(),nums.end());
        
        // T.C: O(N)
        // S.C: O(1)
    }
};
