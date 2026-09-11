// Problem: 485. Max Consecutive Ones
// Link: https://leetcode.com/problems/max-consecutive-ones/

#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxium=0;
        for(auto x:nums){
            if(x==1){
                count++;
            }
            else if(x==0){
                count=0;
            }
            if(maxium<count){
                maxium=count;
            }


        }
        return maxium;
        
        // T.C: O(N)
        // S.C: O(1)
    }
};
