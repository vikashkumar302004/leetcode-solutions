// Problem: 2023. Number of Pairs of Strings With Concatenation Equal to Target
// Link: https://leetcode.com/problems/number-of-pairs-of-strings-with-concatenation-equal-to-target/

#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int count=0;
        
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
               
                if(nums[i]+nums[j]==target && i!=j){
                    count++;
                }
            }
        }
        return count;
        
    }
};
