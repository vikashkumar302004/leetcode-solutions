// Problem: 2799. Count Complete Subarrays in an Array
// Link: https://leetcode.com/problems/count-complete-subarrays-in-an-array/

#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int count=0;
        set<int>s1;
        for(auto x:nums){
            s1.insert(x);
        }
        set<int>s2;
        for(int i=0;i<nums.size();i++){
            s2.clear();
         
            for(int j=i;j<nums.size();j++){
                s2.insert(nums[j]);
                if(s1.size()==s2.size()){
                    count++;
                }

                }
            }
        return count;
        
    }
};
