// Problem: 75. Sort Colors
// Link: https://leetcode.com/problems/sort-colors/

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        for(int i=0;i<nums.size();i++){
            if(mp[0]!=0){
                nums[i]=0;
                mp[0]--;
            }
            else if(mp[1]!=0){
                nums[i]=1;
                mp[1]--;
            }
            else{
                nums[i]=2;

            }
        }

        // T.C: O(N)
        // S.C: O(1)
    }
};
