// Problem: 80. Remove Duplicates from Sorted Array II
// Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int>mp;
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]==0 || mp[nums[i]]==1){
                nums[j]=nums[i];
                j++;
                mp[nums[i]]++;
            }
        }
        int sum=0;
        for(auto x:mp){
            sum+=x.second;
        }
        return sum;
        
        // T.C: O(N)
        // S.C: O(N)
    }
};
