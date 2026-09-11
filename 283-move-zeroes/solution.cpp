// Problem: 283. Move Zeroes
// Link: https://leetcode.com/problems/move-zeroes/

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        // two pointer technique
        int j=1;
        int i=0;
        while(j<nums.size()){
            if(nums[i]==0 && nums[j]==0){
                j++;
            }
            else if(nums[i]==0 && nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
            else{
                i++;j++;
            }
        }
        
        // T.C: O(N)
        // S.C: O(1)
    }
};
