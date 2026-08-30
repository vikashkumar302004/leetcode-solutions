// Problem: 2740. Find the Value of the Partition
// Link: https://leetcode.com/problems/find-the-value-of-the-partition/

#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        //difference minimum tab hoga jab 2 numbers ek-dusre ke sabse close hon.
        sort(nums.begin(),nums.end());
        int diference=INT_MAX;
        for(int i=0;i<nums.size()-1;i++){
            if((nums[i+1]-nums[i])<diference){
                diference=nums[i+1]-nums[i];
            }
        }
        return diference;
        
        // T.C: O(N log N)
        // S.C: O(1) auxiliary (or O(log N) for std::sort recursion stack)
    }
};
