// Problem: 26. Remove Duplicates from Sorted Array
// Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int>mp;
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]==0){
                nums[j]=nums[i];
                j++;
                mp[nums[i]]++;
            }
        }
        return mp.size();
        
        // T.C: O(N)
        // S.C: O(N)
    }
};
